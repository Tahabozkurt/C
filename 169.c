//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char isim[20] = {'b', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char *taha;

    taha = isim;
    printf("%c\n", *(taha+ 1));

    return 0;
}

