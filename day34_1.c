//Insert an element in array at a given postion
#include <stdio.h>
int main() {
    int a[100], n, pst, x;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        {scanf("%d", &a[i]);}
    
    printf("Enter position to insert: ");
    scanf("%d", &pst);
    
    printf("Enter value to insert: ");
    scanf("%d", &x);

    for (int i = n; i > pst; i--)
        {a[i] = a[i - 1];}
    
    a[pst] = x;
    n++;

    printf("New array: ");
    for (int i = 0; i < n; i++)
        {printf("%d ", a[i]);}
    
    return 0;
}