//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    char file[50], name[50];
    int n, roll, i;
    float marks;

    printf("Enter file name: ");
    scanf("%s", file);

    printf("Enter number of students: ");
    scanf("%d", &n);

    FILE *f = fopen(file, "w");

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(f, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(f);

    f = fopen(file, "r");
    printf("\nStudent Records:\n");
    while (fscanf(f, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll no.: %d, Marks: %.2f\n", name, roll, marks);
    }
    fclose(f);

    return 0;
}