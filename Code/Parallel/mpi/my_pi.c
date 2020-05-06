#include <stdio.h>
#include <time.h>
#include <math.h>

int main(int argc, char **argv)
{
    int i, intervals = 10000000;
    double truePi = 3.141592653589793238462643;
    double x, dx, f, sum, pi;
    double time2;

    time_t time1 = clock();

    printf("Number of intervals: %d\n", intervals);

    sum = 0.0;
    dx = 1.0 / (double) intervals;

    for (i = 1; i <= intervals; i++) {
        x = dx * ((double) (i - 0.5));
        f = 4.0 / (1.0 + x*x);
        sum = sum + f;
    }

    pi = dx*sum;

    time2 = (clock() - time1) / (double) CLOCKS_PER_SEC;

    printf("Computed PI %f\n", pi);
    printf("The true PI %f\n\n", truePi);
    printf("Elapsed time (s) = %f\n", time2);

    return 0;
}
