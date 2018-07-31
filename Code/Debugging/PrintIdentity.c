#include <stdio.h>
#include <stdlib.h>

//Method Declaration
int* createIdentity();

//Program Main Entry Point
int main(int argc, char* argv[])
{
    printf("This C program print a 3x3 Identity matrix on the screen...\n");

    int* identity = createIdentity();
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i\t", identity[i*3+j]);
        }
        printf("\n");
    }
    return 0;
}

//Implementation of a method to create 3x3 identity matrix
int* createIdentity()
{
    int identity[9];//This is a local variable, we should not pass its address outside this method

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if( i == j)
                identity[i*3+j] = 1;
            else
                identity[i*3+j] = 0;
        }
    }

    return &identity[0];
}
