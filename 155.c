//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

#define BOYUT 10

int main() {
    int carpimTablosu[BOYUT][BOYUT];

    for (int i = 0; i < BOYUT; i++) {
        for (int j = 0; j < BOYUT; j++) {
            carpimTablosu[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Carpim Tablosu:\n");
    for (int i = 0; i < BOYUT; i++) {
        for (int j = 0; j < BOYUT; j++) {
            printf("%4d", carpimTablosu[i][j]);
        }
        printf("\n");
    }

    return 0;
}

