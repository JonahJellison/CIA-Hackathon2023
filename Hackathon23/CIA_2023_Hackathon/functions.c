////#include "header.h"
//
//void print_board(char board[SQUARE_SIZE][SQUARE_SIZE])
//{
//    int row = 0, col = 0, board_row = 0, board_col = 0;
//    for (row = 0; row < SQUARE_SIZE; row++)
//    {
//        for (col = 0; col < SQUARE_SIZE; col++)
//        {
//            if (row == 0 || row == SQUARE_SIZE - 1 || col == 0 || col == SQUARE_SIZE - 1)
//            {
//                board[row][col] = '*';
//            }
//            else
//            {
//                board[row][col] = ' ';
//            }
//        }
//    }
//    for (board_row = 0; board_row < SQUARE_SIZE; board_row++)
//    {
//        for (int i = 0; i < NUM_BOARDS; i++)
//        {
//            for (board_col = 0; board_col < SQUARE_SIZE; board_col++)
//            {
//                printf("%c ", board[board_row][board_col]);
//            }
//        }
//        printf("\n");
//    }
//}
//int diceROLL(void)
//{
//    return rand() % 3;
//}
//Player initPlayer(int player)
//{
//    Player p;
//    p.position = 0;
//    p.balance = 0;
//    p.color = player;
//    p.owned[0] = 0;
//    p.owned[1] = 0;
//    p.owned[2] = 0;
//    p.owned[3] = 0;
//    return p;
//}
//
//Space FIRSTbox(int start)
//{
//    Space b0;
//    b0.position = 1;
//    b0.ownedBy = 0;
//    b0.rentDue = 25;
//    b0.price = 200;
//    b0.playersContained[0] = 0;
//    b0.playersContained[1] = 0;
//    b0.playersContained[2] = 0;
//    b0.playersContained[3] = 0;
//    return b0;
//}
//
//Space PULLMANAIRbox1(int plane)
//{
//    Space b1;
//    b1.position = 1;
//    b1.ownedBy = 0;
//    b1.rentDue = 25;
//    b1.price = 200;
//    b1.playersContained[0] = 0;
//    b1.playersContained[1] = 0;
//    b1.playersContained[2] = 0;
//    b1.playersContained[3] = 0;
//    return b1;
//}
//
//Space SOUTHMARKETbox2(int market)
//{
//    Space b2;
//    b2.position = 2;
//    b2.ownedBy = 0;
//    b2.rentDue = 25;
//    b2.price = 200;
//    b2.playersContained[0] = 0;
//    b2.playersContained[1] = 0;
//    b2.playersContained[2] = 0;
//    b2.playersContained[3] = 0;
//    return b2;
//}
//
//Space GLOBEHALLbox3(int richppl)
//{
//    Space b3;
//    b3.position = 3;
//    b3.ownedBy = 0;
//    b3.rentDue = 25;
//    b3.price = 200;
//    b3.playersContained[0] = 0;
//    b3.playersContained[1] = 0;
//    b3.playersContained[2] = 0;
//    b3.playersContained[3] = 0;
//    return b3;
//}
//
//
//Space MARTINSTADIUMbox4(int market)
//{
//    Space b2;
//    b2.position = 2;
//    b2.ownedBy = 0;
//    b2.playersContained[0] = 0;
//    b2.playersContained[1] = 0;
//    b2.playersContained[2] = 0;
//    b2.playersContained[3] = 0;
//    return b2;
//}
//
//int BUYbox1(Space b1, Player* p)
//{
//    char decision = '\0', nameofproperty[49];
//    int leftovermoney = 0;
//
//    printf("Would you like to buy this airport (Y/N)\n");
//    scanf("%c", decision);
//    if (decision == 'Y')
//    {
//        if (p->balance > b1.price)
//        {
//            leftovermoney = p->balance - b1.price;
//            p->balance = leftovermoney;
//        }
//        else
//        {
//            printf("You cant buy this\n");
//            return 0;
//        }
//        p->owned[0] = 1;
//        b1.ownedBy = p;
//        b1.playersContained[0] = 1;
//
//    }
//    else
//    {
//        return 0;
//    }
//
//    return;
//}
//
//Bool trade(player)
//{
//
//}
//
//void movePlayer(int player, int DICEp1)
//{
//    int roll = 0;
//    roll = DICEp1;
//
//}