//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    float sayi1, sayi2, sayi3;
    float ortalama;

    printf("Lütfen üç sayı girin: ");
    scanf("%f %f %f", &sayi1, &sayi2, &sayi3);

    float toplam = sayi1 + sayi2 + sayi3;

    ortalama = toplam / 3;

    printf("Girdiğiniz sayıların ortalaması: %.2f\n", ortalama);

    return 0;
}
