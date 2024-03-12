//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

#define SATIR 3
#define SUTUN 3

void matrisDoldur(float matris[SATIR][SUTUN]) {
    for (int i = 0; i < SATIR; i++) {
        for (int j = 0; j < SUTUN; j++) {
            matris[i][j] = 2*i + 3*j + 1;
        }
    }
}

void matrisYazdir(float matris[SATIR][SUTUN]) {
    for (int i = 0; i < SATIR; i++) {
        for (int j = 0; j < SUTUN; j++) {
            printf("%.2f\t", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matris[SATIR][SUTUN];

    matrisDoldur(matris);

    printf("Matris:\n");
    matrisYazdir(matris);

    return 0;
}

