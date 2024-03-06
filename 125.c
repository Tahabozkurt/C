//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int toplam(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

int main() {
    int sayi1, sayi2, sonuc;

    printf("İki tam sayıyı girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    sonuc = toplam(sayi1, sayi2);

    printf("Toplam: %d\n", sonuc);

    return 0;
}
