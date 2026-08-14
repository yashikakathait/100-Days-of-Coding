// Write a program to calculate simple and compound interest for given principal, rate and time
#include <stdio.h>
#include <math.h>
int main ()
{ float P; float R; float t;
    printf("Give principal = ");
    scanf("%f", &P);
    printf("Give rate of interest = ");
    scanf("%f", &R);
    printf("Give time for interest = ");
    scanf("%f", &t);
    float SI=(P*R*t)/100;
    float CI=P*(pow((1+R/100),t)-1);
    printf("Simple interest = %.2f \n Compound interest = %.2f", SI, CI);
    return 0;
} 