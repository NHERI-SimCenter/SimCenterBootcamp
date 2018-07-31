#include <stdio.h>
#include <time.h>
#include <mpi.h>

double myFunc(double x);
double computePi(int procIC, int numP);

static int long numsteps = 100000;

int main(int argc, char **argv) {
	int procID, numP;
	double pi = 0.0;
	double time = 0.0;

	MPI_Init(&argc, &argv);
	MPI_Comm_size( MPI_COMM_WORLD, &numP );
	MPI_Comm_rank( MPI_COMM_WORLD, &procID );

	double t_start = clock();
	
	pi += computePi(procID, numP);
	printf("PI increment from procedure %d:  ", procID);
	
	MPI_Finalize();
	time = (clock() - t_start) / ((double)CLOCKS_PER_SEC) * 1000;
	printf("PI = %f, duration: %f ms\n", pi, time);
}

double computePi(int procID, int numP) {

	double pi = 0.0; 
	double dx = 1.0/numsteps * procID/numP + procID * 1.0/numsteps;
	double x = 0;
	for(int i = 0; i < numsteps; i++) {
		pi += myFunc(x) * dx;
		x += dx;
	}
	
	return pi;
}


double myFunc(double x) {
	return ((4.0) / (1 + x*x));

}
