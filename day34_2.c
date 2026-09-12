//Delete an element from an array
#include <stdio.h>
int main() {
    int a[100], n, pst;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        {scanf("%d", &a[i]);}
    
    printf("Enter position to delete: ");
    scanf("%d", &pst);

    for (int i = pst; i < n - 1; i++)
        {a[i] = a[i + 1];}
    n--;

    printf("New array: ");
    for (int i = 0; i < n; i++)
        {printf("%d ", a[i]);}
    
    return 0;
}