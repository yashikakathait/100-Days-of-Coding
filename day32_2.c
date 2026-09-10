//Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main() {
    long n;
    int f[10] = {0}, max = 0, i;
    printf("Enter integer ");
    scanf("%ld", &n);
    
    while(n > 0) {
        f[n % 10]++;
        n /= 10;
    }
    
    for(i = 0; i < 10; i++) {
        if(f[i] > max) max = f[i];
    }
    
    printf("Digit: ");
    for(i = 0; i < 10; i++) {
        if(f[i] == max && max > 0) printf("%d ", i);
    }
    return 0;
}