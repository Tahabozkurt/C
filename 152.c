//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void birlesimDizisiOlustur(int dizi1[], int boyut1, int dizi2[], int boyut2, int birlesimDizi[], int *birlesimBoyutu);

int main() {
    int dizi1[] = {1, 3, 5, 7, 9};
    int boyut1 = sizeof(dizi1) / sizeof(dizi1[0]);

    int dizi2[] = {2, 4, 6, 8, 10};
    int boyut2 = sizeof(dizi2) / sizeof(dizi2[0]);

    int birlesimDizi[boyut1 + boyut2];
    int birlesimBoyutu = 0;

    birlesimDizisiOlustur(dizi1, boyut1, dizi2, boyut2, birlesimDizi, &birlesimBoyutu);

    printf("Birlesim dizisi: ");
    for (int i = 0; i < birlesimBoyutu; i++) {
        printf("%d ", birlesimDizi[i]);
    }
    printf("\n");

    return 0;
}

void birlesimDizisiOlustur(int dizi1[], int boyut1, int dizi2[], int boyut2, int birlesimDizi[], int *birlesimBoyutu) {
    int i, j;

    for (i = 0; i < boyut1; i++) {
        birlesimDizi[*birlesimBoyutu] = dizi1[i];
        (*birlesimBoyutu)++;
    }

    for (i = 0; i < boyut2; i++) {
        int eslesme = 0;
        for (j = 0; j < *birlesimBoyutu; j++) {
            if (dizi2[i] == birlesimDizi[j]) {
                eslesme = 1;
                break;
            }
        }
        if (!eslesme) {
            birlesimDizi[*birlesimBoyutu] = dizi2[i];
            (*birlesimBoyutu)++;
        }
    }
}

