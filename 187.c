//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    char *haftanin_gunleri[7] = {"Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", "Pazar"};
    int secilen_gun;

    do {
        printf("Lutfen 1 ile 7 arasinda bir deger girin (1=Pazartesi, 2=Sali, ..., 7=Pazar): ");
        scanf("%d", &secilen_gun);

        if (secilen_gun < 1 || secilen_gun > 7) {
            printf("Gecersiz deger! Lutfen 1 ile 7 arasinda bir deger girin.\n");
        }
    } while (secilen_gun < 1 || secilen_gun > 7);

    printf("Secilen gun: %s\n", haftanin_gunleri[secilen_gun - 1]);

    return 0;
}

