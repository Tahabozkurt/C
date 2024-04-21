//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int sayi1, sayi2;
    int *ptr1, *ptr2;

    printf("Lutfen iki sayi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    ptr1 = &sayi1;
    ptr2 = &sayi2;

    printf("Degistirilmeden once:\n");
    printf("sayi1: %d\n", *ptr1);
    printf("sayi2: %d\n", *ptr2);

    swap(ptr1, ptr2);

    printf("Degistirildikten sonra:\n");
    printf("sayi1: %d\n", *ptr1);
    printf("sayi2: %d\n", *ptr2);

    return 0;
}
