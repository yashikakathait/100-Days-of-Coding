//Write a program to check if a number is prime
#include <stdio.h>
int main() {
    int n, i, f = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 1) { 
        if (n % i == 0)
        {f = f + 1;}
    }

    if (f == 2) {
        printf("%d is prime.\n", n);
    } else {
        printf("%d is not prime.\n", n);
    }

    return 0;
}
