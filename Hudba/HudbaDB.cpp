#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hudba.h"

void addAlbum(const char* interpret, const char* nazev, int rok, struct t_album** uk_prvni) {
    struct t_album* noveAlbum = (struct t_album*)malloc(sizeof(struct t_album));
    struct t_album* aktAlbum;

    strcpy_s(noveAlbum->interpret, INTERPRET_SIZE, interpret);
    strcpy_s(noveAlbum->nazev, NAZEV_ALBA_SIZE, nazev);
    noveAlbum->rok = rok;
    noveAlbum->dalsi = NULL;


    if (*uk_prvni == NULL || strcmp(noveAlbum->interpret, (*uk_prvni)->interpret) < 0) {
        noveAlbum->dalsi = *uk_prvni;
        *uk_prvni = noveAlbum;
        return;
    }


    aktAlbum = *uk_prvni;
    while (aktAlbum->dalsi && strcmp(noveAlbum->interpret, aktAlbum->dalsi->interpret) > 0) {
        aktAlbum = aktAlbum->dalsi;
    }

    noveAlbum->dalsi = aktAlbum->dalsi;
    aktAlbum->dalsi = noveAlbum;
}


void deleteAlbumByYear(int rok, struct t_album** uk_prvni) {
    struct t_album* aktAlbum;


    while (*uk_prvni && (*uk_prvni)->rok == rok) {
        struct t_album* temp = *uk_prvni;
        *uk_prvni = (*uk_prvni)->dalsi;
        free(temp);
    }

    aktAlbum = *uk_prvni;
    while (aktAlbum && aktAlbum->dalsi) {
        if (aktAlbum->dalsi->rok == rok) {
            struct t_album* temp = aktAlbum->dalsi;
            aktAlbum->dalsi = aktAlbum->dalsi->dalsi;
            free(temp);
        }
        else {
            aktAlbum = aktAlbum->dalsi;
        }
    }
}



void printAlbums(const struct t_album* uk_prvni) {
    printf("\nHudebni alba:\n");
    while (uk_prvni) {
        printf("%s - %s (%d)\n", uk_prvni->interpret, uk_prvni->nazev, uk_prvni->rok);
        uk_prvni = uk_prvni->dalsi;
    }
    printf("\n");
}