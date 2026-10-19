//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter sorted elements of first array:\n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter sorted elements of second array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    int c[m + n];
    int i = 0, j = 0, k = 0;
    
    while(i < m && j < n) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
    while(i < m) {
        c[k++] = a[i++];
    }
    
    while(j < n) {
        c[k++] = b[j++];
    }
    
    printf("Merged sorted array:\n");
    for(int i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    
    return 0;
}