//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziYazdir(int dizi[], int boyut) {
    printf("Dizi: ");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

void elemanSil(int dizi[], int *boyut, int indis) {
    if (indis < 0 || indis >= *boyut) {
        printf("Gecersiz indis!\n");
        return;
    }

    for (int i = indis; i < *boyut - 1; i++) {
        dizi[i] = dizi[i + 1];
    }

    (*boyut)--;
}

int main() {
    int N;
    int *dizi;
    int sira;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &N);

    dizi = (int *)malloc(N * sizeof(int));
    if (dizi == NULL) {
        printf("Bellek ayirma basarisiz!\n");
        return 1;
    }

    srand(time(NULL));
    printf("Rastgele sayilarla dizi olusturuluyor...\n");
    for (int i = 0; i < N; i++) {
        dizi[i] = rand() % 100;
    }

    diziYazdir(dizi, N);

    printf("Silinecek elemanin sirasini girin: ");
    scanf("%d", &sira);

    elemanSil(dizi, &N, sira - 1);
    diziYazdir(dizi, N);

    free(dizi); 

    return 0;
}
