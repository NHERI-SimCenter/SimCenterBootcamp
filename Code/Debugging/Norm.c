#include <stdio.h>
#include <stdlib.h>

int main()
{
    float* num = 0;
    printf("Enter a number to calculate its absolute value:\n");
    scanf("%f", num);
    float absNum = abs(*num);
    printf("Absolute value is: %f\n", absNum);

    return 0;
}
