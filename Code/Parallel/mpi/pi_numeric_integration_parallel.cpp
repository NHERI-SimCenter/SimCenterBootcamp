#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <cstdio>
#define LUMP 5

using namespace std;

static int long numSteps=100000;

int main(int argc, char **argv) {

	int numP, procID;

	double pi=0, time=0;

	clock_t start; //timer
	start = std::clock();
	//cout<<start<<endl;

  	// the usual mpi initialization
  	MPI_Init(&argc, &argv);
  	MPI_Comm_size(MPI_COMM_WORLD, &numP);
  	MPI_Comm_rank(MPI_COMM_WORLD, &procID);
	
	
	

	
	//integration
	for (int aa=0; aa<numSteps; aa++) {
		double x= (float)aa*1.0/(float)numSteps;
		pi=pi+4.0/(1.0+x*x)*1.0/(float)numSteps;
	}

	cout<<pi<<endl;
	//timer
	time=( std::clock() - start ) / (double) CLOCKS_PER_SEC;
	cout<<time<<endl;
	return 0;
}
