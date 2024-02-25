//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, toplam = 0;

    printf("n ve x değerlerini girin (örneğin, 'n x'): ");
    scanf("%d %f", &n, &x);

    for (int i = 1; i <= n; i++) {
        toplam += (2*i - 1) / pow(x, 2*i);
    }

    printf("Serinin toplamı: %.2f\n", toplam);

    return 0;
}
