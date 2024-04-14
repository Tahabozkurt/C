//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ad1, *ad2, *ad;
    int n = 10, p = 20;
    ad1 = &n;
    ad2 = &p;

    printf("Atamadan önce ad1 degeri: %d\n", *ad1);
    printf("&ad1: %p\n", (void *)ad1);

    *ad1 = *ad2 + 2;

    printf("Atamami yaptiktan sonra ad1 degeri: %d\n", *ad1);
    printf("&ad1: %p\n", (void *)ad1);

    return 0;
}
