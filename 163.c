//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    int can = 10;
    int *p;
    p = &can;
    printf("%d\n", *p);
    printf("%p\n", (void *)p);
    printf("%d\n", can);
    printf("%p\n", (void *)&can);

    int *sayi;
    int n;
    n = 20;
    sayi = &n;
    printf("%d\n", *sayi);
    printf("%p\n", (void *)sayi);
    printf("%d\n", n);
    printf("%p\n", (void *)&n);

    *sayi = 30;
    printf("%d\n", n);

    return 0;
}
