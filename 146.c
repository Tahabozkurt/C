//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int karekok;

    printf("Bir N tamsayısı giriniz: ");
    scanf("%d", &N);

    karekok = karekokHesapla(N);

    printf("%d sayısının karekökü: %d\n", N, karekok);

    return 0;
}

int karekokHesapla(int sayi) {
    int K = 1;
    int toplam = 0;

    while (K * K <= sayi) {
        toplam += K * K + sayi / (2 * K);
        K++;
    }

    return toplam;
}
