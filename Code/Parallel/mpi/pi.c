#include<stdio.h>
#include<time.h>
static int long numSteps = 100000;
int main(){
clock_t launch = clock();
int cores = 40;
int stack=numSteps/cores;
double pi = 0; double time=0;double incr=1.0/numSteps;double x=0.0;
 for (int cpu_tag=0;cpu_tag<cores;cpu_tag++){
	for (int i=cpu_tag*stack; i<stack*(cpu_tag+1); i++){
		x+=incr;
		pi+=4.0/(1+x*x)*incr;
	}
 }
clock_t done = clock();
time = (done-launch)/(double)CLOCKS_PER_SEC*1000;
printf("PI = %f, duration: %f ms\n",pi, time);
return 0;
}


