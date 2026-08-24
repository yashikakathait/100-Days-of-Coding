//Write a program to print sum of first n odd numbers
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter how many odd numbers you want to add: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {int odd = 2 * i - 1; sum += odd;}

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}