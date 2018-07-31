#include <stdio.h>
#include <stdlib.h>

int main()
{
    char prompt[32] = "Enter an integer to calculate its square:";
    int num = 0;
    printf("%s\n", prompt);
    scanf("%i", num);
    printf("Number entered is: %i\n", num);
    printf("Square is: %i\n", num*num);

    return 0;
}
