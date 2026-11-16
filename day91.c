//define a structure student with name, roll number and marks, then read and print one student data.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    
    printf("Enter name: ");
    scanf("%49[^\n]", s.name);
    
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}