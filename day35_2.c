//Rotate an array to right by k positions
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        {scanf("%d", &a[i]);}
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    k = k % n;
    int b[n];
    
    for(int i = 0; i < n; i++)
        {b[(i + k) % n] = a[i];}
    
    printf("Rotated array: ");
    for(int i = 0; i < n; i++)
        {printf("%d ", b[i]);}
    printf("\n");
    
    return 0;
}