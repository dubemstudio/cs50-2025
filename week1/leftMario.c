#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function Prototype
void printRow(int blocks);

int main(void)
{
  char buffer[4];
  int height;
  int success;

  // Prompt user until a valid height (≥ 1) is entered
  do
  {
    printf("Enter Height: ");

    if(!fgets(buffer, sizeof(buffer), stdin)){
      printf("Reading failed!");
      return 1;
    }

    if(strchr(buffer, '\n') == NULL) {
      printf("Input too long.\n");

      int ch;
      while((ch = getchar()) != '\n' && ch != EOF) {

      }
      continue;
    }

    char extra;    
    success = sscanf(buffer, "%d %c", &height, &extra);

  } while (success != 1);

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
