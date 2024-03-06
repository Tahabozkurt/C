//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

unsigned long long faktoriyel(int sayi) {
    if (sayi == 0 || sayi == 1)
        return 1;
    else
        return sayi * faktoriyel(sayi - 1);
}

int main() {
    int sayi1, sayi2;

    printf("İlk sayıyı girin: ");
    scanf("%d", &sayi1);
    printf("İkinci sayıyı girin: ");
    scanf("%d", &sayi2);

    printf("%d! = %llu\n", sayi1, faktoriyel(sayi1));
    printf("%d! = %llu\n", sayi2, faktoriyel(sayi2));

    return 0;
}
