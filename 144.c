//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    int bolunen, bolen;
    int bolum, kalan;

    printf("Bolunen degerini girin: ");
    scanf("%d", &bolunen);
    printf("Bolen degerini girin: ");
    scanf("%d", &bolen);

    bolum = bolunen / bolen;
    kalan = bolunen % bolen;

    printf("Bolum: %d\n", bolum);
    printf("Kalan: %d\n", kalan);

    return 0;
}
