//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci {
    char ad[20];
    char soyad[100];
    int yas;
};

int main() {
    struct ogrenci taha = {"taha", "Bozkurt", 27};
    
    strcpy(taha.ad, "taha");
    strcpy(taha.soyad, "bozkurt");
    
    taha.yas = 27;

    printf("%s \t %s \t %d\n", taha.ad, taha.soyad, taha.yas);

    return 0;
}
