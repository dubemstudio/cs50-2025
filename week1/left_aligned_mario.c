#include <stdio.h>

// Function Prototype
void printRow(int blocks);

int main(void)
{
  int height;

  // Prompt user until a valid height (≥ 1) is entered
  do
  {
    printf("Height: ");
    scanf("%d", &height);
  } while (height < 1);

  // Print rows of increasing length
  for (int i = 0; i < height; i++)
  {
    printRow(i + 1);
  }

  return 0;
}

// Prints a single row with the given number of hash blocks
void printRow(int blocks)
{
  for (int i = 0; i < blocks; i++)
  {
    printf("#");
  }
  printf("\n");
}
