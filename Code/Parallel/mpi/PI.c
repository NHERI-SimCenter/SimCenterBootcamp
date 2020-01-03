#include <stdio.h>

static int long numSteps=100000;

void main() {
	int i; double step,x,sum=0.0,pi;
	step=1.0/numSteps;
	for (i=0; i<numSteps;i++) {
	x=(i+0.0)*step;
	sum += 4.0/(1.0+x*x);
	}
pi=sum*step;
printf("PI= %f\n",pi);
}
