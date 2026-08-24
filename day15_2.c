//Write a program to reverse given number
#include <stdio.h>
int main() {
    int n, rv = 0, rm;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10) {
        rm = n % 10;
        rv = rv * 10 + rm;
    }

    printf("Reversed number = %d\n", rv);

    return 0;
}