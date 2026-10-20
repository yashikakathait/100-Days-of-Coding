//Write a program to take an input array of size N. The error should contain all the integers between 0 to N except for one. Print that missing number.
#include <stdio.h>

int main() {
    int n, i, s = 0, t;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    t = n * (n + 1) / 2;
    printf("%d", t - s);
    return 0;
}