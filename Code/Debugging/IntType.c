#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("This program detects if an integer is even or odd\n");
    printf("Enter a number:");
    scanf("%i", &num);

    int remainder = num % 2;
    if(remainder = 1)
        printf("The number %i is odd\n", num);
    else
        printf("The number %i is even\n", num);

    return 0;
}
