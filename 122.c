//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    int i, j;

    printf("Kelimeyi giriniz: ");
    scanf("%s", kelime);

    int uzunluk = strlen(kelime);

    for(i = 0; i < uzunluk; i++) {
        for(j = 0; j <= i; j++) {
            printf("%c ", kelime[j]);
        }
        printf("\n");
    }

    return 0;
}
