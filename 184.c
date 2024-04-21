//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

#define MAX 15

int main() {
    char dizi[MAX] = {'k', 'l', 'b', 'a', 'q', 'i', 's', 't', 'e', 'f', 'o', 'r', 'c', 'h', 'x'};
    char dizi_kopya[MAX];
    char *sayil;
    char *sayi2;
    int i;

    sayi2 = dizi_kopya;
    for (sayil = dizi; sayil < dizi + MAX; sayil++) {
        *sayi2 = *sayil;
        sayi2++;
    }

    printf("Original table: ");
    for (i = 0; i < MAX; i++) {
        printf("%c", dizi[i]);
    }
    printf("\n");

    return 0;
}
