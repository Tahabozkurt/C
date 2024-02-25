//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    float varis_zamani, ortalama_hiz;
    int mesafe;
    
    mesafe = 450;
    printf("Varış zamanını saat cinsinden girin: ");
    scanf("%f", &varis_zamani);

    ortalama_hiz = mesafe / varis_zamani;

    printf("Arabanın ortalama hızı: %.2f km/saat\n", ortalama_hiz);

    return 0;
}
