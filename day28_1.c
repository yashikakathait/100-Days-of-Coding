//Write a program to print all prime numbers from 1 to n
#include <stdio.h>
int main() {
    int n, i, j, c;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 2; i <= n; i++) {
        c = 0;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                c = 1;
                break;
            }
        }
        if(c == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}