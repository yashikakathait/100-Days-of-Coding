//write a function that accepts a structure as perimeter and print its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;
    
    printf("Enter name: ");
    scanf(" %49[^\n]", s.name);
    
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printStudent(s);
    
    return 0;
}