#include "header2.h"

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

int diceROLL(void)
{
	return rand() % 6 + 1;
}

//Player initPlayer(int player)
//{
//	Player p;
//	p.position = 0;
//	p.balance = 0;
//	p.color = player;
//	p.owned[0] = 0;
//
//	return p;
//}
//
//Space FIRSTbox(int start)
//{
//	Space b0;
//	b0.position = 1;
//	b0.ownedBy = 0;
//	b0.rentDue = 25;
//	b0.price = 200;
//	b0.playersContained[0] = 0;
//	b0.playersContained[1] = 0;
//	b0.playersContained[2] = 0;
//	b0.playersContained[3] = 0;
//	return b0;
//}
//
//Space PULLMANAIRbox1(int plane)
//{
//	Space b1;
//	b1.position = 1;
//	b1.ownedBy = 0;
//	b1.rentDue = 25;
//	b1.price = 200;
//	b1.playersContained[0] = 0;
//	b1.playersContained[1] = 0;
//	b1.playersContained[2] = 0;
//	b1.playersContained[3] = 0;
//	return b1;
//}
//
//Space SOUTHMARKETbox2(int market)
//{
//	Space b2;
//	b2.position = 2;
//	b2.ownedBy = 0;
//	b2.rentDue = 25;
//	b2.price = 200;
//	b2.playersContained[0] = 0;
//	b2.playersContained[1] = 0;
//	b2.playersContained[2] = 0;
//	b2.playersContained[3] = 0;
//	return b2;
//}
//
//Space GLOBEHALLbox3(int richppl)
//{
//	Space b3;
//	b3.position = 3;
//	b3.ownedBy = 0;
//	b3.rentDue = 25;
//	b3.price = 200;
//	b3.playersContained[0] = 0;
//	b3.playersContained[1] = 0;
//	b3.playersContained[2] = 0;
//	b3.playersContained[3] = 0;
//	return b3;
//}
//
//
//Space MARTINSTADIUMbox4(int market)
//{
//	Space b2;
//	b2.position = 2;
//	b2.ownedBy = 0;
//	b2.playersContained[0] = 0;
//	b2.playersContained[1] = 0;
//	b2.playersContained[2] = 0;
//	b2.playersContained[3] = 0;
//	return b2;
//}
//
//int BUYbox1(Space b1, Player* p)
//{
//	char decision = '\0', nameofproperty[49];
//	int leftovermoney = 0;
//
//	printf("Would you like to buy this airport (Y/N)\n");
//	scanf("%c", decision);
//	if (decision == 'Y')
//	{
//		if (p->balance > b1.price)
//		{
//			leftovermoney = p->balance - b1.price;
//			p->balance = leftovermoney;
//		}
//		else
//		{
//			printf("You cant buy this\n");
//			return 0;
//		}
//		p->owned[0] = 1;
//		b1.ownedBy = p;
//		b1.playersContained[0] = 1;
//
//	}
//	else
//	{
//		return 0;
//	}
//
//	return;
//}

Bool trade(player)
{

}

void movePlayer(int player, int DICEp1)
{
	int roll = 0;
	roll = DICEp1;

}

void init_spaces()
{
	for (int i = 0; i < MAX_SPACES; i++)
	{


	}
}
//Name, rent, rentw / 1, rentw / 2, rentw / 3, rentw / 4, rentw / H
//
//Brown Properties
//Gannon, 2, 10, 30, 90, 160, 250
//Goldsworthy, 4, 20, 60, 180, 320, 450
//
//Light Blue Properties
//
//stephenson North, 6, 30, 90, 270, 400, 550
//stepheson: Rent $6, With 1 House $30, With 2 Houses $90, With 3 Houses $270, With 4 Houses $400, With Hotel $550
//Connecticut Avenue : Rent $8, With 1 House $40, With 2 Houses $100, With 3 Houses $300, With 4 Houses $450, With Hotel $600
//Pink Properties
//
//St.Charles Place : Rent $10, With 1 House $50, With 2 Houses $150, With 3 Houses $450, With 4 Houses $625, With Hotel $750
//States Avenue : Rent $10, With 1 House $50, With 2 Houses $150, With 3 Houses $450, With 4 Houses $625, With Hotel $750
//Virginia Avenue : Rent $12, With 1 House $60, With 2 Houses $180, With 3 Houses $500, With 4 Houses $700, With Hotel $900
//Orange Properties
//
//St.James Place : Rent $14, With 1 House $70, With 2 Houses $200, With 3 Houses $550, With 4 Houses $750, With Hotel $950
//Tennessee Avenue : Rent $14, With 1 House $70, With 2 Houses $200, With 3 Houses $550, With 4 Houses $750, With Hotel $950
//New York Avenue : Rent $16, With 1 House $80, With 2 Houses $220, With 3 Houses $600, With 4 Houses $800, With Hotel $1000
//Red Properties
//
//Kentucky Avenue : Rent $18, With 1 House $90, With 2 Houses $250, With 3 Houses $700, With 4 Houses $875, With Hotel $1050
//Indiana Avenue : Rent $18, With 1 House $90, With 2 Houses $250, With 3 Houses $700, With 4 Houses $875, With Hotel $1050
//Illinois Avenue : Rent $20, With 1 House $100, With 2 Houses $300, With 3 Houses $750, With 4 Houses $925, With Hotel $1100
//
//Yellow Properties
//
//Atlantic Avenue : Rent $22, With 1 House $110, With 2 Houses $330, With 3 Houses $800, With 4 Houses $975, With Hotel $1150
//Ventnor Avenue : Rent $22, With 1 House $110, With 2 Houses $330, With 3 Houses $800, With 4 Houses $975, With Hotel $1150
//Marvin Gardens : Rent $24, With 1 House $120, With 2 Houses $360, With 3 Houses $850, With 4 Houses $1025, With Hotel $1200
//Green Properties
//
//Pacific Avenue : Rent $26, With 1 House $130, With 2 Houses $390, With 3 Houses $900, With 4 Houses $1100, With Hotel $1275
//North Carolina Avenue : Rent $26, With 1 House $130, With 2 Houses $390, With 3 Houses $900, With 4 Houses $1100, With Hotel $1275
//Pennsylvania Avenue : Rent $28, With 1 House $150, With 2 Houses $450, With 3 Houses $1000, With 4 Houses $1200, With Hotel $1400
//Dark Blue Properties
//
//Park Place : Rent $35, With 1 House $175, With 2 Houses $500, With 3 Houses $1100, With 4 Houses $1300, With Hotel $1500
//Boardwalk : Rent $50, With 1 House $200, With 2 Houses $600, With 3 Houses $1400, With 4 Houses $1700, With Hotel $2000
//Railroads
//
//Brown Properties
//
//purchase, house, hotel
//60,50,50
//
//60,50,50
//
//Light Blue Properties
//
//100,50,50
//
//100,50,50
//
//120,50,50
//
//Pink Properties
//
//140,100,100
//
//140,100,100
//
//160,100,100 
//
//Orange Properties
//
//180,100,100
//
//180,100,100
//
//200,100,100 
//
//Red Properties
//
//220,150,150
//
//Indiana Avenue : Purchase Price $220, House Cost $150, Hotel Cost $150 per house
//
//Illinois Avenue : Purchase Price $240, House Cost $150, Hotel Cost $150 per house
//
//Yellow Properties
//
//Atlantic Avenue : Purchase Price $260, House Cost $150, Hotel Cost $150 per house
//
//Ventnor Avenue : Purchase Price $260, House Cost $150, Hotel Cost $150 per house
//
//Marvin Gardens : Purchase Price $280, House Cost $150, Hotel Cost $150 per house
//
//Green Properties
//
//Pacific Avenue : Purchase Price $300, House Cost $200, Hotel Cost $200 per house
//
//North Carolina Avenue : Purchase Price $300, House Cost $200, Hotel Cost $200 per house
//
//Pennsylvania Avenue : Purchase Price $320, House Cost $200, Hotel Cost $200 per house
//
//Dark Blue Properties
//
//Park Place : Purchase Price $350, House Cost $200, Hotel Cost $200 per house
//
//Boardwalk : Purchase Price $400, House Cost $200, Hotel Cost $200 per house