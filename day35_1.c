//Find second largest element in array
#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        {scanf("%d", &a[i]);}
    
    int largest = a[0];
    int second = -999999;
    
    for(int i = 1; i < n; i++)
        {if(a[i] > largest)
            {second = largest;
            largest = a[i];}
            else if(a[i] > second && a[i] != largest) 
            {second = a[i];}}
    
    printf("Second largest: %d\n", second);
    return 0;
}