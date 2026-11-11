//Define a struct with enum gender and print person's gender.
#include <stdio.h>
#include <string.h>

enum Gender {Male,
    Female,
    Other,
    Unknown};

struct Person {enum Gender gender;};

int main() {
    struct Person p;
    char genderStr[20];

    printf("Enter gender (Male/Female/Other): ");
    scanf("%s", genderStr);

    if (strcmp(genderStr, "Male") == 0) {p.gender = Male;}
    else if (strcmp(genderStr, "Female") == 0) {p.gender = Female;}
    else if (strcmp(genderStr, "Other") == 0) {p.gender = Other;}
    else {p.gender = Unknown;}

    switch (p.gender) {
        case Male:
            printf("Male\n");
            break;
        case Female:
            printf("Female\n");
            break;
        case Other:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0;
}