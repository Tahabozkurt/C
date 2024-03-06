//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main() {
    char cümle[1000];
    int karakterSayısı[ASCII_SIZE] = {0};
    int maxKarakter, i;
    int uzunluk;

    printf("Cümleyi giriniz: ");
    fgets(cümle, sizeof(cümle), stdin);

    uzunluk = strlen(cümle);

    for(i = 0; i < uzunluk; i++) {
        karakterSayısı[cümle[i]]++;
    }

    maxKarakter = 0;
    for(i = 0; i < ASCII_SIZE; i++) {
        if(karakterSayısı[i] > karakterSayısı[maxKarakter]) {
            maxKarakter = i;
        }
    }

    printf("En çok kullanılan karakter: %c ,(%d kez)\n", maxKarakter, karakterSayısı[maxKarakter]);

    return 0;
}
