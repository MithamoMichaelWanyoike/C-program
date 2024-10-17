#include <stdio.h>

int main() {
    // Define the 3D array with the specified values
    int array[1][3][3] = {
        {{56, 45, 24}, {76, 65, 48}, {89, 56, 88}}
    };

    // Print the 3D array
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("(%d, %d, %d) ", array[i][j][k], array[i][j][(k+1)%3], array[i][j][(k+2)%3]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}