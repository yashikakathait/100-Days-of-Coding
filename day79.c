//A file numbers.txt contains a list of integers, separated by spaces. Read all integers, compute their sum and average and print both.
//10 20 30 40 50
#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int num;
    long sum = 0;
    int count = 0;

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    double average = (double)sum / count;

    printf("Sum: %ld\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}