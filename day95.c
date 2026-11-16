//return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;
    
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    
    return s[maxIndex];
}

int main() {
    struct Student s[5], top;
    int i;
    
    for(i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    
    top = getTopStudent(s, 5);
    
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);
    
    return 0;
}