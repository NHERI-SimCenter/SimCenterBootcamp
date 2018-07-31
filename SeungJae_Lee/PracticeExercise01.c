#include <stdio.h>
int MultiplyFloat(float a, float b, float *c);
int main(){
	float num1, num2, result;
	float *num3;
	printf("Enter first integer:");
	scanf("%g", &num1);
	printf("Enter second integer:");
	scanf("%g", &num2);
	result = MultiplyFloat(num1, num2, num3);
	printf("Multiply %g * %g = %g\n", num1, num2, *num3);
	return 0;
}

int MultiplyFloat(float a, float b, float *c) {
	*c = a * b;
	return 1;
}
