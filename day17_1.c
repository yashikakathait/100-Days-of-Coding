//Write a program to check if a number is an armstrong number
#include <stdio.h>
int main() {
    int n, t, r, s = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    t = n;
    while (t > 0) {
        r = t % 10;
        s = s + (r * r * r);
        t = t / 10;
    }

    if (s == n) {
        printf("%d is Armstrong.\n", n);
    } else {
        printf("%d is not Armstrong.\n", n);
    }

    return 0;
}
