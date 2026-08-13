// Write a program to find sum of n natural numbers
#include <stdio.h>
int main()
{long n;
    printf("Give positive integer value ");
    scanf("%ld", &n);
    long sum=(n*(n+1))/2;
    printf("The sum of first %ld natural numbers in %ld", n, sum);
    return 0;
}