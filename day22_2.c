//Write a program to find sum of series 1+3/4+5/6+7/8... up to n terms
#include <stdio.h>
int main() {
    int n, i, den;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            den = 1;
        } else {
            den = 2 * i;
        }
        sum = sum + (float)(2 * i - 1) / den;
    }
    printf("Sum of series is: %.1f\n", sum);
    return 0;
}