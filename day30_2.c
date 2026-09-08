//Count positive, negative, and zero elements in an array
#include <stdio.h>
int main() {
    int s;
    printf("Enter size of array: ");
    scanf("%d", &s);

    int a[s];
    printf("Enter elements:", s);
    for (int i = 0; i < s; i++)
        {scanf("%d", &a[i]);}

    int p = 0;
    int n = 0;
    int z = 0;

    for (int i = 0; i < s; i++)
        {if (a[i] > 0)  {p++;}
        else if (a[i] < 0)  {n++;}
        else   {z++;}}

    printf("Positive: %d\n", p);
    printf("Negative: %d\n", n);
    printf("Zero: %d\n", z);

    return 0;
}