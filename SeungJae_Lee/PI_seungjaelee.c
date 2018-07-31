#include <stdio.h>
static int long numSteps = 100000;

int main(){
	double pi = 0;
	double dx = (double)1.0/numSteps;
	double time = dx/2;

	for (int i=0; i<numSteps; i++) {
		pi = pi + 4/(1+time*time)*dx;
		time = time + dx;	
	}
	printf("%g\n",dx);
	printf("PI = %g, duration: %g ms\n", pi, time);
	return 0;
}
