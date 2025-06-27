#include <stdio.h>

// Function Prototype
void printRow(int pyramidHeight, int currentRow);

int main(void)
{
  int height;

  // Hardcoded value for now (can be replaced with user input)
  do
  {
    height = 10;
  } while (height < 1);

  // Print each row of the pyramid
  for (int i = 0; i < height; i++)
  {
    printRow(height, i + 1);
  }

  return 0;
}

// Prints a single row of the double half-pyramid
void printRow(int pyramidHeight, int currentRow)
{
  // Print leading spaces (left-aligned padding)
  for (int j = 0; j < pyramidHeight - currentRow; j++)
  {
    printf(" ");
  }

  // Print left half of the pyramid
  for (int k = 0; k < currentRow; k++)
  {
    printf("#");
  }

  // Print gap between the two halves
  printf("  ");

  // Print right half of the pyramid
  for (int l = 0; l < currentRow; l++)
  {
    printf("#");
  }

  // Move to the next line
  printf("\n");
}
