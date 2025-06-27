#include <stdio.h>

// Function prototype to print each row of the pyramid
void printRow(int totalHeight, int currentRow);


//main
int main(void)
{
  char buffer[10];
  int height;
  int success;

  // Get user input
  do{
    printf("Enter Height: ");

    if(!fgets(buffer, sizeof(buffer), stdin)){
      printf("Reading error!\n");
    }
    
    success = sscanf(buffer, "%d", &height);
  } while (success != 1);

  // Print each row of the pyramid
  for (int i = 0; i < height; i++){
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
