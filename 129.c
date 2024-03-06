//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int faktoriyel(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktoriyel(n - 1);
}

int main() {
    int i;

    printf("1'den 10'a kadar her bir sayının faktöriyeli:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d! = %d\n", i, faktoriyel(i));
    }

    return 0;
}

