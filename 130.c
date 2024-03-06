//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void sayiAl() {
    int sayi;

    while (1) {
        printf("Bir sayi girin (negatif sayi girerek cikis yapin): ");
        scanf("%d", &sayi);

        if (sayi < 0) {
            printf("Negatif sayi girdiniz. Program sonlandiriliyor...\n");
            break;
        }

        printf("Girdiginiz sayi: %d\n", sayi);
    }
}

int main() {
    sayiAl(); 

    return 0;
}


