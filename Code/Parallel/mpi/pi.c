#include <stdio.h>
static int long numSteps = 100000;
int main() {
double pi = 0; double time=0; 
double dx=1.0/numSteps;
// your code
for (int i=0; i<numSteps; i++) {
  double x1=i*dx;
  double x2=(i+1)*dx; 
  double x3=(x1+x2)/2.0;
  double f=4.0/(1.0+x3*x3);
  pi=pi+f*dx;
}
// your code
printf("PI = %f, duration: %f ms\n",pi, time);
return 0;
}
