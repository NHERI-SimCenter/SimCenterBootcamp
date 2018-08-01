#include <omp.h>
#include <stdio.h>
#include <time.h>

static int long numSteps = 1000000000;

int main() {

  // perform calculation
  double pi   = 0;
  double dx = 1./numSteps;
  double x = 0.5*x;
  double start = omp_get_wtime();

  // compute using Reduction
#pragma omp parallel for reduction(+:pi) 
    for (int i=0; i<numSteps; i++) {
      // x += 0.5*dx;  code in original sequential implementation
      // but now loop dependent .. so replace with the following
      x = (i+0.5)*dx;  // which while greatly slowing process gives speedup!
      pi += 4./(1.+x*x);
    }

    pi *= dx;

    double end = omp_get_wtime();  
    printf("Reduction: PI = %16.14f in %.4g sec\n",pi, end-start);

    start = omp_get_wtime();  

  // compute using Synchronization    
#pragma omp parallel 
    {
      double sum = 0;
#pragma omp for
      for (int i=0; i<numSteps; i++) {
	x = (i+0.5)*dx;
	sum += 4./(1.+x*x);
      }
#pragma omp critical
      pi += sum;
    }

    pi *= dx;

    end = omp_get_wtime();  
    printf("Synchronization: PI = %16.14f in %.4g sec\n",pi, end-start);
    return 0;
}
