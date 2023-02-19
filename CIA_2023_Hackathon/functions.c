#include "header.h"

int main(void)
{
    srand(time(NULL));
    int DICEp1 = 0, DICEp2 = 0, DICEp3 = 0, DICEp4 = 0;
    char BUYbox1 = '\0';

    char board[SQUARE_SIZE][SQUARE_SIZE] = {'\0' };
    print_board(board);


    Player p1 = initPlayer(1);
    Player p2 = initPlayer(2);

    Space b0 = FIRSTbox(0);
    Space b1 = PULLMANAIRbox1(1);
    Space b2 = SOUTHMARKETbox2(2);
    Space b3 = GLOBEHALLbox3(3);
    Space b4 = MARTINSTADIUMbox4(4);

    int playerCount = 0;
        p1.balance = 200;
        p1.owned[0] = 0;
        p1.owned[1] = 0;
        p1.owned[2] = 0;
        p1.owned[3] = 0;
        p1.position = 0;
        p1.color = "\0";

        p2.balance = 200;
        p2.owned[0] = 0;
        p2.owned[1] = 0;
        p2.owned[2] = 0;
        p2.owned[3] = 0;
        p2.position = 0;
        p2.color = "\0";
    


    
    printf("Player one, you'll be rolling first\n");
    DICEp1 = diceROLL(1);
    if (DICEp1 == 1) 
    {
        p1.position = b1.position;
        
    }
    else()


    return 0;
}

