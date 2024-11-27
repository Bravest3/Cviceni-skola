#include <iostream>
#pragma once

#define INTERPRET_SIZE 51
#define NAZEV_ALBA_SIZE 51

struct t_album {
    char interpret[INTERPRET_SIZE];
    char nazev[NAZEV_ALBA_SIZE];
    int rok;
    struct t_album* dalsi;
};

void addAlbum(const char* interpret, const char* nazev, int rok, struct t_album** uk_prvni);
void deleteAlbumByYear(int rok, struct t_album** uk_prvni);
void printAlbums(const struct t_album* uk_prvni);