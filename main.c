#include <stdio.h>

void drawTable(void);


char table[3][3] = {
    {'a', 'a', 'a'},
    {'a', 'a', 'a'},
    {'a', 'a', 'a'}
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
    }
}


