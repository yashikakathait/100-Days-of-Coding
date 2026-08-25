//Write program to take a number as input and print it's binary representation
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Binary: ");
    
    for (i = 31; i >= 0; i--) {
        int bit = n >> i;
        
        if (bit & 1) {
            printf("1");
            flag = 1;
        } else if (flag) {
            printf("0");
        }
    }
    
    if (flag == 0) {
        printf("0");
    }
    
    printf("\n");
    return 0;
}