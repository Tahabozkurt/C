//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char cumle[MAX_LENGTH];
    int uzunluk, kelimeSayisi, indeks;

    printf("Bir cumle giriniz: ");
    fgets(cumle, MAX_LENGTH, stdin);

    uzunluk = strlen(cumle);

    kelimeSayisi = 1;

    for (indeks = 0; indeks < uzunluk; indeks++) {
        if (cumle[indeks] == ' ') {
            kelimeSayisi++;
        }
    }

    printf("Girilen cumlede %d kelime bulunmaktadir.\n", kelimeSayisi);

    return 0;
}
