//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi1, sayi2, toplam;
    int *ptr1, *ptr2;

    ptr1 = &sayi1;
    ptr2 = &sayi2;

    printf("Lütfen 2 adet sayı giriniz:\n");
    scanf("%d %d", ptr1, ptr2);

    toplam = *ptr1 + *ptr2;
    printf("Toplam: %d\n", toplam);

    return 0;
}
