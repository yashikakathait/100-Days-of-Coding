//Write a program to enter three numbers and find largest among them
#include <stdio.h>
int main()
{int a; int b; int c;
    printf("Enter first number ");
    scanf("%d", &a);
    printf("Enter second number ");
    scanf("%d", &b);
    printf("Enter third number ");
    scanf("%d", &c);

    if (a>=b && a>=c)
    {printf("%d is largest",a);}
    else if (b>=a && b>=c)
    {printf("%d is largest",b);}
    else
    {printf("%d is largest",c);}

return 0;}