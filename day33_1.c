//Search in a sorted array using binary search
#include <stdio.h>
int main() {
    int a[100], n, x, l, h, m, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    l = 0;
    h = n - 1;

    while (l <= h) {
        m = l + (h - l) / 2;

        if (a[m] == x) {
            printf("Found at index %d\n", m);
            return 0;
        }
        
        if (a[m] < x) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }

    printf("No such element\n");
    return 0;
}