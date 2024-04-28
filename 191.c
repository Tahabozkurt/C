//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <string.h>

struct ogrenci_bilgi {
    int no;
    char ad[10];
    char soyad[10];
    int yas;
};

int main() {
    struct ogrenci_bilgi ogrenci_1, ogrenci_2;

    ogrenci_1.no = 522;
    strcpy(ogrenci_1.ad, "Can");
    strcpy(ogrenci_1.soyad, "Bez");
    ogrenci_1.yas = 18;

    ogrenci_2 = ogrenci_1;

    return 0;
}
