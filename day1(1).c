//Q1 User inputs, operations, and outputs - Write a program to input two numbers and display their sum
#include <stdio.h>
int main()
{int a; int b;
    printf("Give a number");
    scanf("%d", &a);
    printf("Give another number");
    scanf("%d", &b);
    int c=a+b;
    printf("Their sum is %d", c);
    return 0;
}
