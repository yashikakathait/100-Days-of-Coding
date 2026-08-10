// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    float a; float b;
    printf("Give first number");
    scanf("%f", &a);
    printf("Give second number");
    scanf("%f", &b);

    float sum=a+b;
    printf("Sum = %f",sum);

    float diff=a-b;
    printf("\nDifference = %f", diff);

    float prod=a*b;
    printf("\nProduct = %f", prod);

    if(b==0) {printf("\nERR: Divisor cannot be zero");}
    else {float quo=a/b; printf("\nQuotient = %f", quo);}

    return 0;
}