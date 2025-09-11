#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
 

typedef uint8_t BYTE;

const int BLOCK_SIZE = 512;
 
int main(int argc, char *argv[])
{
  // Verify command-line    
  if(argc != 2)
  {
    printf("Usage: ./recover cardfile\n");
    return 1;
  }

  // 
  BYTE buffer[BLOCK_SIZE];

  // open card file
  FILE *card = fopen(argv[1], "r");
  if(card == NULL)
  {
    printf("Could not open file\n");
    return 1;
  }

  // read 512bytes of memory from card
  while(fread(buffer, 1, BLOCK_SIZE, card) == BLOCK_SIZE)
  {

  }
}