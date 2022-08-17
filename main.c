#include <stdio.h>
#include <string.h>

int drawTable(void);
int prompt(void);
int fill_chosen_index(int index);

char *table[3][3] = {
    {"1", "2", "3"},
    {"4", "5", "6"},
    {"7", "8", "9"}
};

int chosen_index;

int main(int argc, char const *argv[])
{
    drawTable();
    prompt();
    return 0;
}

int drawTable(void) {
    for (int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            printf("%s", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int prompt(void) {
    printf("Enter the number where you want to insert your X \n");
    scanf("%i", &chosen_index);
    
    // Look for that number, check if it's previously chosen or not, otherwise fill it.
    for (int i = 0; i <=2; i++) {
        for (int j = 0; j <= 2; j++) {
            if (strcmp(table[i][j], "432") == 0) {
                printf("Success");
            }
        }
    }

    return 0;
}


