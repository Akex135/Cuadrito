#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
void mostrarcuadro(int x, int y) {
    system("cls");
    for (int i = 0; i < y; i++) {
        printf("\n");
    }
    for (int i = 0; i < x; i++) {
        printf(" ");
    }
    printf(" -----\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < x; j++) {
            printf(" ");
        }
        printf("|     |\n");
    }
    for (int i = 0; i < x; i++) {
        printf(" ");
    }
    printf(" -----\n");
}

int main() {
    int x = 0, y = 0;
    mostrarcuadro(x, y);
    while (1) {
        char tecla = getch();
        switch(tecla) {
            case 'w':
                y--;
                break;
            case 's':
                y++;
                break;
            case 'a':
                x--;
                break;
            case 'd':
                x++;
                break;
            default:
                break;
        }
        mostrarcuadro(x, y);
    }

    return 0;
}
