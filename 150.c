//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <math.h>

float eskenarUcgenAlani(float kenarUzunlugu);

int main() {
    float kenarUzunlugu, alan;

    printf("Eskenar ucgenin kenar uzunlugunu girin: ");
    scanf("%f", &kenarUzunlugu);

    alan = eskenarUcgenAlani(kenarUzunlugu);

    printf("Eskenar ucgenin alani: %.2f\n", alan);

    return 0;
}

float eskenarUcgenAlani(float kenarUzunlugu) {
    float alan = (sqrt(3) / 4) * kenarUzunlugu * kenarUzunlugu;
    return alan;
}

