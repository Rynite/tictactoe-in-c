#include <stdio.h>

void drawTable(void);
void prompt(void);

char table[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

int main(int argc, char const *argv[])
{
    drawTable();
    return 0;
}

void drawTable(void) {
    for (int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            printf("%c", table[i][j]);
        }
        printf("\n");
    }
}

void prompt(void) {
    printf("Enter a");
}


