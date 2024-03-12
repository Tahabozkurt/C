//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int ikiKatMi(int sayi);
int ucKatMi(int sayi);

int ikiKatMi(int sayi) {
    return (sayi % 2 == 0);
}

int ucKatMi(int sayi) {
    return (sayi % 3 == 0);
}

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (ikiKatMi(sayi)) {
        printf("%d, 2'nin bir katidir.\n", sayi);
    } else {
        printf("%d, 2'nin bir kati degildir.\n", sayi);
    }

    if (ucKatMi(sayi)) {
        printf("%d, 3'un bir katidir.\n", sayi);
    } else {
        printf("%d, 3'un bir kati degildir.\n", sayi);
    }

    if (ikiKatMi(sayi) && ucKatMi(sayi)) {
        printf("%d, 6'nın bir katidir.\n", sayi);
    } else {
        printf("%d, 6'nın bir kati degildir.\n", sayi);
    }

    return 0;
}
