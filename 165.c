//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

void degistir(int ad1, int ad2) {
    int gecici;
    gecici = ad1;
    ad1 = ad2;
    ad2 = gecici;
    printf("Ilk sayi: %d, ikinci sayi: %d\n", ad1, ad2);
}

int main() {
    int a = 10, b = 20;
    printf("Çağrımdan önce: %d %d\n", a, b);
    degistir(a, b);
    printf("Çağırdıktan sonra: %d %d\n", a, b);
    return 0;
}
