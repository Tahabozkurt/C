//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    char cumle[1000];
    int karakterSayisi = 0;

    printf("Bir cumle giriniz: ");
    gets(cumle);

    while (cumle[karakterSayisi] != '\0') {
        karakterSayisi++;
    }

    printf("Girilen cumlede %d karakter bulunmaktadir.\n", karakterSayisi);

    return 0;
}
