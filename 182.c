//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <string.h>

int main() {
    char dizi[100];
    char eleme;
    char *taha;

    printf("Lutfen bir karakter dizisi girin: ");
    gets(dizi);

    printf("Karakter dizisinden cikarmak istediginiz karakter nedir: ");
    scanf("%c", &eleme);

    taha = dizi;

    while (*taha) {
        if (*taha == eleme) {
            strcpy(taha, taha + 1);
        } else {
            taha++;
        }
    }

    printf("Karakter dizisinin son hali: \"%s\"\n", dizi);

    return 0;
}
