#ifndef HEADER_H
#define HEADER_H
#define _CRT_SECURE_NO_WARNINGS
#define SQUARE_SIZE 8
#define BOARD_SIZE 20
#define NUM_BOARDS 5
#define MAX_SPACES 25
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <conio.h>


typedef enum Bool { FALSE, TRUE } Bool;

typedef struct player
{
    int position;
    int balance;
    int color;
    int owned;
}Player;

typedef struct Property_Rent
{
    int house1;
    int house2;
    int house3;
    int house4;
    int hotel;
}Property_Rent;

typedef struct Property_Costs
{
    int purchase;
    int house;
    int hotel;
}Property_Costs;

typedef struct Property
{
    int position;
    char name[20];
    int ownedBy;
    Property_Rent rent;
    Property_Costs price;
}Property;

typedef struct space
{
    Bool occupied[4];
    struct space* pNext;
} Space;


void print_board(char board[SQUARE_SIZE][SQUARE_SIZE]);
int diceROLL(void);
Player initPlayer(int player);
//Space FIRSTbox(int start);
//Space PULLMANAIRbox1(int plane);
//Space SOUTHMARKETbox2(int market);
//Space GLOBEHALLbox3(int richppl);
//Space MARTINSTADIUMbox4(int market);









#endif	
