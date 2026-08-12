//Write a program to swap two numbers using a third variable
#include <stdio.h>
int main()
{
    int a; int b;
    printf("Give first number ");
    scanf("%d", &a);
    printf("Give second number ");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("After swap %d %d", a ,b );
    return 0;
}