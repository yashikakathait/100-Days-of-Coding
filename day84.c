//Define an enum with success, failure and time out and print messages accordingly.
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIME_OUT
};

int main() {
    int input;
    enum Status current_status;
    printf("SUCCESS = 0\nFAILURE = 1\nTIME OUT = 2\n");
    printf("Enter status number: ");
    scanf("%d", &input);

    current_status = (enum Status)input;

    switch (current_status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIME_OUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Invalid status entered.\n");
            break;
    }

    return 0;
}