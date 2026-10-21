//Write a program to take an integer arrasy as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, i, val;
    long long sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%lld\n", sum - (long long)(n - 1) * n / 2);
    return 0;
}