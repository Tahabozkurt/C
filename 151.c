//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

float seriToplam(int n);

int main() {
    int n;
    float toplam;

    printf("n degerini girin: ");
    scanf("%d", &n);

    toplam = seriToplam(n);

    printf("Seri toplam: %.2f\n", toplam);

    return 0;
}

float seriToplam(int n) {
    float toplam = 0.0;
    int i;

    for (i = 1; i <= n; i++) {
        toplam += 1.0 / i;
    }

    return toplam;
}
