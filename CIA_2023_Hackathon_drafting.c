
#define SQUARE_SIZE 8
#define BOARD_SIZE 20
#define NUM_BOARDS 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <conio.h>

typedef struct player
{
	int position;
	int balance;
	int color;
	int owned[4];
}Player;

void print_board(char board[SQUARE_SIZE][SQUARE_SIZE]);
int diceROLL(int randomNUM);
Player initPlayer(int player);

int main(void)
{
   int trueNUM = 0;

    char board[SQUARE_SIZE][SQUARE_SIZE] = {
        '\0'
    };

    print_board(board);
    trueNUM = diceROLL(0);
    printf("%d", trueNUM);
   
	Player p1 = initPlayer(1);
	Player p2 = initPlayer(2);
	Player p3 = initPlayer(3);
	Player p4 = initPlayer(4);
   int playerCount = 0;
	do
	{
		printf("How many players are there in the game? Choose from 2-4.\n");
		scanf("%d", &playerCount);
	} while (playerCount < 2 || playerCount > 4);
	
   
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

int diceROLL(int randomNUM)
{
    srand(time(NULL));
    return rand() % 3;
}

Player initPlayer(int player)
{
	Player p;
	p.position = 0;
	p.balance = 0;
	p.color = player;
	p.owned[4] = 0, 0, 0, 0;

	return p;
}

