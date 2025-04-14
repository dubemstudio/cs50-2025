#include <stdio.h>

// Function prototype to print each row of the pyramid
void printRow(int totalHeight, int currentRow);

int main(void)
{
  int height;

  // Replace this with user input if desired
  do
  {
    // Simulated user input (can be changed to scanf)
    height = 10;
  } while (height < 1);

  // Print each row of the pyramid
  for (int i = 0; i < height; i++)
  {
    printRow(height, i + 1);
  }

  return 0;
}

// Prints a single row of the right-aligned half-pyramid
void printRow(int totalHeight, int currentRow)
{
  // Print leading spaces
  for (int j = 0; j < totalHeight - currentRow; j++)
  {
    printf(" ");
  }

  // Print the hash blocks
  for (int k = 0; k < currentRow; k++)
  {
    printf("#");
  }

  // Move to the next line
  printf("\n");
}
