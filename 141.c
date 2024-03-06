//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100 

void diziYazdir(int dizi[], int N) {
    printf("Dizi: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

void diziyeEkle(int dizi[], int *N, int sira, int eleman) {
    (*N)++;
    
    for (int i = *N - 1; i > sira - 1; i--) {
        dizi[i] = dizi[i - 1];
    }

    dizi[sira - 1] = eleman;
}

int main() {
    int N, dizi[MAX_N], eleman, sira;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &N);

    printf("Dizi elemanlarini rastgele olusturulacak.\n");
    for (int i = 0; i < N; i++) {
        dizi[i] = rand() % 100;
    }
    diziYazdir(dizi, N);

    printf("Eklemek istediginiz elemani ve sira numarasini girin: ");
    scanf("%d %d", &eleman, &sira);

    if (sira < 1 || sira > N + 1) {
        printf("Girilen sira numarasi gecersiz!\n");
    } else {
        diziyeEkle(dizi, &N, sira, eleman);
        printf("Eleman basariyla eklendi.\n");
        diziYazdir(dizi, N);
    }

    return 0;
}
