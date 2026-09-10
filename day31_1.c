//Search for an element in array using linear search
#include <stdio.h>

int main() {
    int n, i, x, a[50];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);
    

    for(i = 0; i < n; i++) {
        if(a[i] == x) { printf("Found at %d", i); return 0; }
    }
    printf("Not found");
    return 0;
}