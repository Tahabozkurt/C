//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N 100

int maksimumBul(int dizi[], int N) {
    int maksimum = dizi[0];

    for (int i = 1; i < N; i++) {
        if (dizi[i] > maksimum) {
            maksimum = dizi[i];
        }
    }

    return maksimum;
}

int minimumBul(int dizi[], int N) {
    int minimum = dizi[0];

    for (int i = 1; i < N; i++) {
        if (dizi[i] < minimum) {
            minimum = dizi[i];
        }
    }

    return minimum;
}

int main() {
    int N, dizi[MAX_N];

    printf("Kac adet sayi uretmek istiyorsunuz? ");
    scanf("%d", &N);

    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        dizi[i] = rand() % 100;
    }

    int maksimum = maksimumBul(dizi, N);
    int minimum = minimumBul(dizi, N);

    printf("Dizi icerisindeki maksimum deger: %d\n", maksimum);
    printf("Dizi icerisindeki minimum deger: %d\n", minimum);

    return 0;
}
