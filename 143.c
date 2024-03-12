//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    int x, y, temp;

    printf("x degerini girin: ");
    scanf("%d", &x);
    printf("y degerini girin: ");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
