#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

static int long numSteps=100000;

int main(int argc, char **argv) {

	int numP, procID;

	double pi=0, time1, time2;
	
	//clock_t start; //timer
	time1 = omp_get_wtime();
	//start = std::clock();
	//cout<<start<<endl;
	double stepSize=1.0/(float)numSteps;
	
	#pragma omp parallel (+:pi) //A synchronization feature
	{
		int tid = omp_get_thread_num();
	 	int numT = omp_get_num_threads();
		cout<<numT<<endl;
		double sum=0.;	

		//integration
		double aveNumStep=numSteps/numT;
		if (tid<numT-1) {
			for (int aa=aveNumStep*(tid-1); aa<aveNumStep*tid; aa++) {
				double x= (float)aa*stepSize;
				sum+=4.0/(1.0+x*x)*stepSize;
			}
			pi=pi+sum; // pi is outside paralle process. Don't get it into the for-loop!
			
		} else { //the last thread gets a little more
			for (int aa=aveNumStep*(tid-1); aa<numSteps; aa++) {
				double x= (float)aa*stepSize;
				sum+=4.0/(1.0+x*x)*stepSize;
			}
			pi=pi+sum; // pi is outside paralle process. Don't get it into the for-loop!
		}
	}
	//cout<<pi<<endl;
	
	//timer
	time2=omp_get_wtime();
	//cout<<time2-time1<<endl;
	printf("Synchronization: PI = %16.14f in %.4g sec\n",pi, time2-time1)
	return 0;
}
