//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    int tavsanlar = 1042;
    int kuslar = 2272;
    int yil = 0;

    while (tavsanlar <= kuslar) {
        tavsanlar *= 1.038;
        kuslar *= 1.012;
        yil++;
    }

    printf("Tavşanlar, kuşları %d yıl sonra geçecek.\n", yil);

    return 0;
}
