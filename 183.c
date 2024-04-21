//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    int dizi[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int *pointer;

    printf("Dizimizin ilk hali: \n");
    for (int i = 0; i < 15; i++) {
        printf("%4d", *(dizi + i));
    }
    printf("\n");

    printf("Dizimizdeki çift sayılar: \n");
    for (int i = 0; i < 15; i += 2) {
        printf("%4d", *(dizi + i));
    }
    printf("\n");

    printf("Dizimizde bulunan tek sayılar:\n");
    for (pointer = dizi + 1; pointer < dizi + 15; pointer += 2) {
        printf("%4d", *pointer);
    }
    printf("\n");

    return 0;
}
