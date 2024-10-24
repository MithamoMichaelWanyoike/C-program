#include <stdio.h>


struct book {
    char title[31];       
    char author[31];      
    int publication_year;  
    char ISBN[14];        
    float price;        
};

int main() {
    // Declare a variable of this structure type and initialize it
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}