//Count even and odd numbers in an array
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:", n);
    for (int i = 0; i < n; i++)
        {scanf("%d", &a[i]);}

    int e = 0;
    int o = 0;

    for (int i = 0; i < n; i++)
        {if (a[i] % 2 == 0) {e++;}
        else 
            {o++;}}

    printf("Even: %d\n", e);
    printf("Odd: %d\n", o);

    return 0;
}