#include<stdio.h>
float prodFloat(float a,float b);
int main(){
float float1,float2,prod;
printf("Enter first floating number:");
scanf("%f",&float1);//read input to the float 1
printf("Enter second floating number:");
scanf("%f",&float2);//read input to the float 2
prod = prodFloat(float1,float2);
printf("product of %.2f x %.2f = %.2f\n", float1,float2,prod);
return(0);
}
// function to evaluate vector product
float prodFloat(float a, float b) {
float prod = 0;

prod = a*b;

return prod;
}
