//Find max and min elements of array
#include <stdio.h>
int main() {
    int n, i;
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n; i++) {
        printf("Enter %d element: ",i);
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Max: %d\n", max);
    printf("Min: %d", min);

    return 0;
}