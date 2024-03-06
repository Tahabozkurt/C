//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void tekCift(int sayi) {
    if (sayi % 2 == 0) {
        printf("%d bir cift sayidir.\n", sayi);
    } else {
        printf("%d bir tek sayidir.\n", sayi);
    }
}

int main() {
    int sayi;

    printf("Pozitif bir tam sayi girin: ");
    scanf("%d", &sayi);
    
    if (sayi <= 0) {
        printf("Girdiginiz sayi pozitif bir tam sayi degildir.\n");
        return 0;
    }

    tekCift(sayi);

    return 0;
}


