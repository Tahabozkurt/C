//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void floydUcgeni(int satir) {
    int sayi = 1;

    printf("Floyd Ucgeni:\n");
    for (int i = 1; i <= satir; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", sayi);
            sayi++;
        }
        printf("\n");
    }
}

int main() {
    int satir;

    printf("Floyd ucgeninin kac satirini istiyorsunuz? ");
    scanf("%d", &satir);

    if (satir <= 0) {
        printf("Lutfen pozitif bir sayi girin.\n");
        return 0;
    }

    floydUcgeni(satir);

    return 0;
}
