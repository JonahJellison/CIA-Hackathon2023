//#include "header.h"
//
//int main(void)
//{
//    srand(time(NULL));
//    int DICEp1 = 0, DICEp2 = 0;
//    char BUYbox1 = '\0';
//
//    char board[SQUARE_SIZE][SQUARE_SIZE] = { '\0' };
//    print_board(board);
//
//
//    Player p1 = initPlayer(1);
//    Player p2 = initPlayer(2);
//
//    Space b0 = FIRSTbox(0);
//    Space b1 = PULLMANAIRbox1(1);
//    Space b2 = SOUTHMARKETbox2(2);
//    Space b3 = GLOBEHALLbox3(3);
//    Space b4 = MARTINSTADIUMbox4(4);
//
//    int playerCount = 0;
//    p1.balance = 200;
//    p1.owned[0] = 0;
//    p1.owned[1] = 0;
//    p1.owned[2] = 0;
//    p1.owned[3] = 0;
//    p1.position = 0;
//    p1.color = "\0";
//
//    p2.balance = 200;
//    p2.owned[0] = 0;
//    p2.owned[1] = 0;
//    p2.owned[2] = 0;
//    p2.owned[3] = 0;
//    p2.position = 0;
//    p2.color = "\0";
//
//
//    int playerPlaying = 1, winner = 0, die = 0;
//
//    while (winLoss() == 0)
//    {
//        system("cls"); //Might be bad to put here, check later
//        if (playerPlaying == 1)
//        {
//            printf("Player one, your roll! Press any key to begin!\n");
//            system("pause");
//            die = diceROLL();
//
//            //Simulate movement here etc. 
//
//            if (p1.balance < 0)
//            {
//                winner = 2;
//            }
//            else if (p2.balance < 0)
//            {
//                winner = 1;
//            }
//            else
//            {
//                ;
//            }
//            playerPlaying = 2;
//        }
//        else //Player 2
//        {
//            printf("Player 2, your roll! Press any key to begin!\n");
//            system("pause");
//            die = diceROLL();
//
//            //Simulate movement etc.
//
//            if (p1.balance < 0)
//            {
//                winner = 2;
//            }
//            else if (p2.balance < 0)
//            {
//                winner = 1;
//            }
//            else
//            {
//                ;
//            }
//            playerPlaying = 1;
//        }
//
//
//        return 0;
//    }
//}
