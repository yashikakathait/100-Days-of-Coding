// Write a program to convert celsius to farhenheit
#include <stdio.h>
int main()
{
    float tc;
    printf("Enter temperature in celsius ");
    scanf("%f", &tc);

    float tf=(tc*1.8)+32;
    printf("The temperature is farhentheit is %f", tf);
    return 0;
}