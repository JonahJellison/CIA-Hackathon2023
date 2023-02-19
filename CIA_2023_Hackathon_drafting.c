
#define SQUARE_SIZE 8
#define BOARD_SIZE 20
#define NUM_BOARDS 5

#include <stdio.h>
#include <stdlib.h>

void print_board(char board[SQUARE_SIZE][SQUARE_SIZE]);

int main(void)
{
    char board[SQUARE_SIZE][SQUARE_SIZE] = {
        '\0'
    };

    print_board(board);

    return 0;
}
            
void print_board(char board[SQUARE_SIZE][SQUARE_SIZE]) 
{
   int row = 0, col = 0, board_row = 0, board_col = 0;
   for (row = 0; row < SQUARE_SIZE; row++)
   {
      for (col = 0; col < SQUARE_SIZE; col++)
      {
          if (row == 0 || row == SQUARE_SIZE - 1 || col == 0 || col == SQUARE_SIZE - 1)
          {
              board[row][col] = '*';
          }
          else
          {
              board[row][col] = ' ';
          }
      }
      }
   for (board_row = 0; board_row < SQUARE_SIZE; board_row++)
   {
       for (int i = 0; i < NUM_BOARDS; i++)
       {
           for (board_col = 0; board_col < SQUARE_SIZE; board_col++)
           {
               printf("%c ", board[board_row][board_col]);
           }
       }
       printf("\n");
   }
}
