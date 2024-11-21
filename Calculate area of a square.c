#include <stdio.h>

int main() {
  int side, area;
  char anotherSquare;

  do {
    printf("Enter the side of the square: ");
    scanf("%d", &side);

    if (side < 0) {
      printf("Error: Side cannot be negative.\n");
    } else {
      area = side * side;
      printf("The area of the square is: %d\n", area);
    }

    printf("Do you want to calculate the area of another square (y/n)? ");
    scanf(" %c", &anotherSquare);
  } while (anotherSquare == 'y');

  return 0;
}