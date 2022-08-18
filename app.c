#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


// Function prototypes
void drawBoard(void);
void askPlayer(void);
void askComputer(void);
void checkPlayerWinner(void);
void checkComputerWinner(void);
void clearScreen(void);

char board[3][3] = {
    {'#', '#', '#'},
    {'#', '#', '#'},
    {'#', '#', '#'}
};

// Used for da while loop mainly and printing the winner
char *winner = " ";



int main(int argc, char const *argv[])
{
    do {
        drawBoard();
        askPlayer();
        checkPlayerWinner();
        askComputer();
        checkComputerWinner();
        clearScreen();
    }
    while (winner == " ");

    if (winner == "player") {
        printf("Congrats! You won :)\n");
    } else {
        printf("You lost! Computer wins :(\n");
    }

    return 0;
}


void drawBoard(void) {
    printf("\n\n\n");
    printf("\t\t\t%c   +  %c   +  %c\n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t\t--- + ---  + ---\n");
    printf("\t\t\t%c   +  %c   +  %c\n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t\t--- + ---  + ---\n");
    printf("\t\t\t%c   +  %c   +  %c\n\n\n", board[2][0], board[2][1], board[2][2]);
}

void askPlayer(void) {
    unsigned int row;
    unsigned int column;

    printf("It's your turn!\n");
    printf("Which row? ");
    scanf("%d", &row);
    printf("Which column ");
    scanf("%d", &column);

    while (board[row][column] != '#') {
        printf("*****************\n");
        printf("\n\n [[ Sorry, pick a different position :( ]]");
    }

    board[row][column] = 'O';

}

void askComputer(void) {

    printf("It's the computer's turn!\n");

    srand(time(0));

    unsigned int row;
    unsigned int column;
    
    do
    {
        row = rand() % 3;
        column = rand() % 3;
    } while (board[row][column] == '#' && board[row][column] != 'X');

    printf("Computer chose position, [%d][%d]\n", row, column);

    board[row][column] = 'X';
}

void checkPlayerWinner(void) {
    // Check horizontal lines
    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O' || board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O' || board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
        winner = "player";
    } 

    // Check vertical lines
    else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O' || board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O' || board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
        winner = "player";
    }

    // Check diagonal lines
    else if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O' || board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
        winner = "player";
    }
}

void checkComputerWinner(void) {
    // Check horizontal lines
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' || board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' || board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
        winner = "computer";
    } 

    // Check vertical lines
    else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' || board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' || board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
        winner = "computer";
    }

    // Check diagonal lines
    else if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X' || board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        winner = "computer";
    }
}

void clearScreen(void) {
    printf("\e[1;1H\e[2J");
}