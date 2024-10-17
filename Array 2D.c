#include <stdio.h>

int main() {
    // Define and initialize the 2D array for marks
    int marks[3][3] = {
        {61, 57, 39},
        {88, 26, 86},
        {60, 26, 28}
    };

    // Print the marks to verify
    printf("Marks array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
    }