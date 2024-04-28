//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

struct tarih {
    int gun;
    char ay[10];
    int yil;
};

struct calisan {
    int sicil_no;
    char isim[30];
    char adres[50];
    struct tarih ise_giris;
    double maas;
};

int main() {
    struct calisan _bilgi;
    return 0;
}
