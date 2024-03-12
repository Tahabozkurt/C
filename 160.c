//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void dortIslem(int *sayi1, int *sayi2, char islem);

int main() {
    int sayi1, sayi2;
    char islem;

    printf("Iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    printf("Yapilacak islemi secin (+, -, *, /): ");
    scanf(" %c", &islem);

    dortIslem(&sayi1, &sayi2, islem);

    printf("Sonuc: %d\n", sayi1);

    return 0;
}

void dortIslem(int *sayi1, int *sayi2, char islem) {
    switch(islem) {
        case '+':
            *sayi1 += *sayi2;
            break;
        case '-':
            *sayi1 -= *sayi2;
            break;
        case '*':
            *sayi1 *= *sayi2;
            break;
        case '/':
            if (*sayi2 != 0) {
                *sayi1 /= *sayi2;
            } else {
                printf("Bir sayiyi sifira bölemezsiniz!\n");
            }
            break;
        default:
            printf("Gecersiz islem!\n");
    }
}
