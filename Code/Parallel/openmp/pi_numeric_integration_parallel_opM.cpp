#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

static int long numSteps=100000;

int main(int argc, char **argv) {

	int numP, procID;

	double pi=0, time=0;
	
	//clock_t start; //timer
	time = omp_get_wtime();
	//start = std::clock();
	//cout<<start<<endl;
	
	#pragma omp parallel
	{
		int tid = omp_get_thread_num();
	 	int numT = omp_get_num_threads();
		

		//integration
		aveNumStep=numSteps/numT;
		if (tid<numT-1) {
			for (int aa=aveNumStep*(tid-1); aa<aveNumStep*tid; aa++) {
				double x= (float)aa*1.0/(float)numSteps;
				pi=pi+4.0/(1.0+x*x)*1.0/(float)numSteps;
			}
		} else { //the last thread gets a little more
			for (int aa=aveNumStep*(tid-1); aa<numSteps; aa++) {
				double x= (float)aa*1.0/(float)numSteps;
				pi=pi+4.0/(1.0+x*x)*1.0/(float)numSteps;
			}
		}
	}
	cout<<pi<<endl;
	//timer
	time=omp_get_wtime();
	cout<<time<<endl;
	return 0;
}
