#include <stdio.h>
#include <string.h>

int drawTable(void);
int prompt(void);
int fill_chosen_index(char *index);

char *table[3][3] = {
    {"1", "2", "3"},
    {"4", "5", "6"},
    {"7", "8", "9"}
};

char *chosen_index;

int main(int argc, char const *argv[])
{
    drawTable();
    prompt();
    return 0;
}

int drawTable(void) {
    for (int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            printf("%c", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int prompt(void) {
    printf("Enter the number where you want to insert your X \n");
    scanf("%s", &chosen_index);
    
    // Look for that number, check if it's previously chosen or not, otherwise fill it.
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            if (strcmp(table[i][j], chosen_index) == 0) {
                table[i][j] = "X";
            }
            else {
                printf("something wrong happened :( \n");
            }
        }
    }

    drawTable();

    return 0;
}


