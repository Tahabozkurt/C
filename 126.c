//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int toplam(int x, int y) {
    return x + y;
}

int fark(int x, int y) {
    return x - y;
}

int carpim(int x, int y) {
    return x * y;
}

float bolum(int x, int y) {
    if (y != 0) {
        return (float)x / y;
    } else {
        printf("Hata: Sıfıra bölme hatası!\n");
        return 0;
    }
}

int main() {
    int sayi1, sayi2;

    printf("İki tam sayıyı giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    printf("Toplam: %d\n", toplam(sayi1, sayi2));
    printf("Fark: %d\n", fark(sayi1, sayi2));
    printf("Çarpım: %d\n", carpim(sayi1, sayi2));
    printf("Bölüm: %.2f\n", bolum(sayi1, sayi2));

    return 0;
}
