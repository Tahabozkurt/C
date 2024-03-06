//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void sayilariListele(int N) {
    printf("1'den %d'e kadar olan sayilar:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Pozitif bir tam sayi girin: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Girdiginiz sayi pozitif bir tam sayi degil.\n");
        return 0;
    }

    sayilariListele(N);

    return 0;
}
