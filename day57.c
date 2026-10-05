//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of array in order of their appearance. Previous greater element is the nearest element on the left which is greater than current element.If there is no such element, then the previous greater element for current element is -1. 
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements of array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        int pge = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                pge = arr[j];
                break;
            }
        }
        printf("%d ", pge);
    }
    return 0;
}