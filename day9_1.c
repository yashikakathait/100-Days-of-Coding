//Program to find roots of quadratic equation
#include <stdio.h>
#include <math.h>

int main() {float a, b, c, d, r1, r2;
printf("Enter a, b, c: ");
scanf("%f %f %f", &a, &b, &c);
d = b * b - 4 * a * c;
if (d > 0) {
r1 = (-b + sqrt(d)) / (2 * a);
r2 = (-b - sqrt(d)) / (2 * a);
printf("Real and Distinct\nRoot 1 = %.2f\nRoot 2 = %.2f\n", r1, r2);
} 
else if (d == 0) {
r1 = -b / (2 * a);
printf("Real and Equal\nRoot = %.2f\n", r1);
} 
else {
r1 = -b / (2 * a);
r2 = sqrt(-d) / (2 * a);
printf("Complex\nRoot 1 = %.2f + %.2fi\nRoot 2 = %.2f - %.2fi\n", r1, r2, r1, r2);}
return 0;
}

