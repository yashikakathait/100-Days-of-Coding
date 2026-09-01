//Write program to find sum of series 2/3+4/7+6/11+8/15... upto n terms
#include <stdio.h>
int main() {
    int n, i;
    float num, den, sum;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    sum = 0.0;
    num = 2.0;
    den = 3.0;
    
    for (i = 1; i <= n; i++) {
        sum = sum + (num / den);
        num = num + 2.0;
        den = den + 4.0;
    }
    
    printf("Sum of the series = %f\n", sum);
    
    return 0;
}