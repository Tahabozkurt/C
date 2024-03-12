//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void maxMinBul(int dizi[], int boyut, int *max, int *min);

int main() {
    int dizi[] = {5, 8, 3, 12, 6, 10};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int maksimum, minimum;

    maxMinBul(dizi, boyut, &maksimum, &minimum);

    printf("Dizinin maksimum degeri: %d\n", maksimum);
    printf("Dizinin minimum degeri: %d\n", minimum);

    return 0;
}

void maxMinBul(int dizi[], int boyut, int *max, int *min) {
    *max = dizi[0];
    *min = dizi[0];

    for (int i = 1; i < boyut; i++) {
        if (dizi[i] > *max) {
            *max = dizi[i];
        }
        if (dizi[i] < *min) {
            *min = dizi[i];
        }
    }
}

