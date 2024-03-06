//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void daire(float yaricap, float *alan, float *cevre);

int main() {
    float yaricap, alan, cevre;

    printf("Dairenin yaricapini girin: ");
    scanf("%f", &yaricap);

    daire(yaricap, &alan, &cevre);

    printf("Dairenin alani: %.2f\n", alan);
    printf("Dairenin cevresi: %.2f\n", cevre);

    return 0;
}

void daire(float yaricap, float *alan, float *cevre) {
    *alan = 3.14159 * yaricap * yaricap;

    *cevre = 2 * 3.14159 * yaricap;
}
