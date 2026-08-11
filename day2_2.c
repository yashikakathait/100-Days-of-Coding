// Write a program to calculate area and circumference of circle
#include <stdio.h>
int main()
{
    float r;
    printf("Enter radius ");
    scanf("%f", &r);
    float ar=3.14*(r*r); float crcm=2*3.14*r;
    printf("The area is %f and the circumference is %f", ar, crcm);
    return 0;
}