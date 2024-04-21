//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char taha[150];
    char *pointer;

    printf("Lutfen bir karakter dizisi girin: ");
    gets(taha);

    for (pointer = taha; *pointer; pointer++) {
        printf("Dizimiz \"%s\" %d kadar karakterden olusmaktadir.\n", taha, pointer - taha);
    }

    return 0;
}
