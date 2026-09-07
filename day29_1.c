//Find sum of array elements
#include <stdio.h>
int main() {
    int n, i, sum=0;
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n; i++) {
        printf("Enter %d element: ", i);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}