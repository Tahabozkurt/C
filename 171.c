//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char karakter = 'C';
    int integerdegerim = 1;
    float floatsayim = 5.43;
    double douplesayim = 6748598097654656;

    printf("Karakterim = %c, Karakterimin adresi = %p\n", karakter, (void *)&karakter);
    printf("Integer degerim = %d, Integerimin adresi = %p\n", integerdegerim, (void *)&integerdegerim);
    printf("Float degerim = %f, Floatimin adresi = %p\n", floatsayim, (void *)&floatsayim);
    printf("Double degerim = %lf, Doubleimin adresi = %p\n", douplesayim, (void *)&douplesayim);

    return 0;
}
