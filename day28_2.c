//Write a program to read and print elements of a one dimensional array
#include <stdio.h>
int main() {
    int n, i;
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    
    printf("The array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}