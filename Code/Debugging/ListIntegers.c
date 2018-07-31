#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Method Declaration
bool isValidInt(char* line);

//Program Main Entry Point
int main(int argc, char* argv[])
{
    printf("This C program creates a list of integers "\
            "starting from 0 up to the maximum value "\
            "specified by the user...\n");

    //Prompt user for input
    printf("Please enter the maximum integer: \n");

    char* numline = NULL;
    size_t size = 0;

    //Read the user input line
    getline(&numline, &size, stdin);

    //Check if the line is a valid
    if(!isValidInt(numline))
    {
        printf("Invalid maximum integer value!\n");
        return -1;
    }

    int max = atoi(numline);

    printf("Please enter the output file name: \n");
    size = 0;
    char* filename = NULL;
    getline(&filename, &size, stdin);

    if(filename[0] = '\n' && filename[1] == '\0') //single equal sign is a bug (invalid condition that is always true)
    {
        printf("File name is empty!");
        return -1;
    }

    //Removing the trailing newline character
    strtok(filename, "\n");
    FILE* outFile = NULL;
    outFile = fopen(filename, "w");

    //Write the list of integers
    for (int i = 0; i <= max; i++)
        fprintf(outFile, "%i\n", i);

    fclose(outFile);
    return 0;
}

//Implementation of a method to check the user entered a valid +ve integer
bool isValidInt(char* line)
{
    //if we the line pointer is null, then this is not an integer
    if(NULL == line)
        return false;

    //We will loop through each character and make sure it is a valid digit
    int i = 0;
    while(line[i] != '\n')
    {
        if(line[i]< '0' || line[i] > '9')
            return false;
        //i++;//Commenting this line is a bug (infinite loop)
    }

    return true;
}
