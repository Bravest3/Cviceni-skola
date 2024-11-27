using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Hudba.h"


int main() {
    struct t_album* prvni = NULL; 
    char cmd;


    addAlbum("The Prodigy", "Invaders Must Die", 2009, &prvni);
    addAlbum("Linkin Park", "Meteora", 2003, &prvni);
    addAlbum("Linkin Park", "Hybrid Theory", 2000, &prvni);
    addAlbum("AC/DC", "Highway to Hell", 1979, &prvni);
    addAlbum("Pendulum", "Immersion", 2010, &prvni);

    do {
        system("cls");
        printf("A: Pridat album\n");
        printf("D: Smazat album podle roku\n");
        printf("P: Zobrazit alba\n");
        printf("Q: Konec\n\n");

        printf("Vase volba: ");
        cmd = tolower(getchar());
        while (getchar() != '\n');

        switch (cmd) {
        case 'a': {
            char interpret[INTERPRET_SIZE];
            char nazev[NAZEV_ALBA_SIZE];
            int rok;

            printf("Interpret: ");
            scanf_s("%50s", interpret, (unsigned)_countof(interpret));
            while (getchar() != '\n');

            printf("Nazev alba: ");
            scanf_s("%50s", nazev, (unsigned)_countof(nazev));
            while (getchar() != '\n');

            printf("Rok vydani: ");
            scanf_s("%d", &rok);
            while (getchar() != '\n');

            addAlbum(interpret, nazev, rok, &prvni);
            break;
        }
        case 'd': {
            int rok;
            printf("Rok alba ke smazani: ");
            scanf_s("%d", &rok);
            while (getchar() != '\n');
            deleteAlbumByYear(rok, &prvni);
            break;
        }
        case 'p':
            printAlbums(prvni);
            getchar(); 
            break;
        }
    } while (cmd != 'q');

    return 0;
}