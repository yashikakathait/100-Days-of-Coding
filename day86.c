//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations is using switch.
#include <stdio.h>

enum Operation {ADD = 1, SUBTRACT, MULTIPLY};

int main()
{int choice; double a, b, result;

    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (choice)
    {   case ADD:
            result = a + b;
            printf("Result: %.2lf\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %.2lf\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}