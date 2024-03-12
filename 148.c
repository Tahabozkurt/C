//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int toplamSaniye(int saat, int dakika, int saniye);

int main() {
    int saat, dakika, saniye;

    printf("Saat degerini girin: ");
    scanf("%d", &saat);
    printf("Dakika degerini girin: ");
    scanf("%d", &dakika);
    printf("Saniye degerini girin: ");
    scanf("%d", &saniye);

    printf("Toplam saniye: %d\n", toplamSaniye(saat, dakika, saniye));

    return 0;
}

int toplamSaniye(int saat, int dakika, int saniye) {
    return saat * 3600 + dakika * 60 + saniye;
}
