//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char taha[100] = "sevvalll";
    char *p1;
    p1 = taha;
    printf("4. karakter: %c\n", *(p1 + 3));
    return 0;
}
