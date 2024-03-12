//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <ctype.h>

#define MAX_UZUNLUK 1000

int main() {
    char cumle[MAX_UZUNLUK];
    int harfSayisi[26] = {0};

    printf("Bir cumle girin: ");
    fgets(cumle, MAX_UZUNLUK, stdin);

    for (int i = 0; cumle[i] != '\0'; i++) {
        char karakter = tolower(cumle[i]);

        if (karakter >= 'a' && karakter <= 'z') {
            harfSayisi[karakter - 'a']++;
        }
    }

    for (char harf = 'a'; harf <= 'z'; harf++) {
        printf("%c: %d kere\n", harf, harfSayisi[harf - 'a']);
    }

    return 0;
}
