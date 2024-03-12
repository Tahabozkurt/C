//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

float ortalamaHesapla(int dizi[], int boyut);

int main() {
    int dizi[100], i, n;
    float ortalama;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);

    printf("Dizinin elemanlarini girin:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    ortalama = ortalamaHesapla(dizi, n);

    printf("Dizinin ortalama degeri: %.2f\n", ortalama);

    return 0;
}

float ortalamaHesapla(int dizi[], int boyut) {
    int toplam = 0, i;
    float ortalama;

    for (i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }

    ortalama = (float)toplam / boyut;

    return ortalama;
}
