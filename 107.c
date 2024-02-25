//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    int sayi, bolen;

    printf("Lütfen bir sayı girin: ");
    scanf("%d", &sayi);

    printf("Lütfen bölen sayıyı girin: ");
    scanf("%d", &bolen);

    if (sayi % bolen == 0) {
        printf("%d, %d'ye tam bölünebilir.\n", sayi, bolen);
    } else {
        printf("%d, %d'ye tam bölünebilir değil.\n", sayi, bolen);
    }

    return 0;
}
