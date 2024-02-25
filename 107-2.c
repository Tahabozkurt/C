//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    int n;
    float toplam = 0.0;

    printf("n değerini girin: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        toplam += 1.0 / i;
    }

    printf("Serinin toplamı: %.2f\n", toplam);

    return 0;
}
