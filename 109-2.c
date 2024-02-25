//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <math.h>

#include <stdio.h>

int main() {
    int sayi1, sayi2;
    int carpim;

    printf("İki sayı girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    carpim = sayi1 * sayi2;

    if ((sayi1 > 0 && sayi2 > 0) || (sayi1 < 0 && sayi2 < 0)) {
        printf("Çarpım pozitif.\n");
    } else if (carpim == 0) {
        printf("Çarpım 0'dır.\n");
    } else {
        printf("Çarpım negatif.\n");
    }

    return 0;
}
