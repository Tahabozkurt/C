//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int ikiKatMi(int *sayi) {
    if (*sayi % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int ucKatMi(int *sayi) {
    if (*sayi % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (ikiKatMi(&sayi)) {
        printf("%d sayisi 2'nin bir katidir.\n", sayi);
    } else {
        printf("%d sayisi 2'nin bir kati degildir.\n", sayi);
    }

    if (ucKatMi(&sayi)) {
        printf("%d sayisi 3'un bir katidir.\n", sayi);
    } else {
        printf("%d sayisi 3'un bir kati degildir.\n", sayi);
    }

    if (ikiKatMi(&sayi) && ucKatMi(&sayi)) {
        printf("%d sayisi 6'nin bir katidir.\n", sayi);
    } else {
        printf("%d sayisi 6'nin bir kati degildir.\n", sayi);
    }

    return 0;
}
