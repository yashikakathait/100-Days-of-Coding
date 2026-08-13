// Write a program to swap two numbers without using third variable
#include <stdio.h>
int main()
{ int a; int b;
printf("Give a number ");
scanf("%d", &a);
printf("Give another number ");
scanf ("%d", &b);
a=a+b; b=a-b; a=a-b;
printf("After swap %d %d ", a, b);
return 0;}