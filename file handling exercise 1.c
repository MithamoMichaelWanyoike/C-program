#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store student data
struct Student {
    char name[50];
    int marks;
};

int main() {
    // Create an array of students
    struct Student students[5];

    // Get the student data from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Open a file for writing
    FILE *fp = fopen("students.txt", "w");

    // Check if the file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Write the student data to the file
    for (int i = 0; i < 5; i++) {
        fprintf(fp, "%s %d\n", students[i].name, students[i].marks);
    }

    // Close the file
    fclose(fp);

    // Print a success message
    printf("Student data saved to file.\n");

    return 0;
}