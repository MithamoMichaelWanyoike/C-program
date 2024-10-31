#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to write a sentence to a file
void write_sentence(char *filename) {
    char sentence[101];

    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, 101, stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove trailing newline

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }

    fprintf(fp, "%s\n", sentence);
    fclose(fp);
    printf("Sentence written to file.\n");
}

// Function to read a sentence from a file
void read_sentence(char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char sentence[101];
    fgets(sentence, 101, fp);
    sentence[strcspn(sentence, "\n")] = 0; // Remove trailing newline

    printf("Sentence from file: %s\n", sentence);
    fclose(fp);
}

// Function to append a sentence to a file
void append_sentence(char *filename) {
    char sentence[101];

    printf("Enter a second sentence: ");
    fgets(sentence, 101, stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove trailing newline

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }

    fprintf(fp, "\n%s\n", sentence);
    fclose(fp);
    printf("Sentence appended to file.\n");
}

int main() {
    char filename[] = "data.txt";

    write_sentence(filename);
    read_sentence(filename);
    append_sentence(filename);

    return 0;
}