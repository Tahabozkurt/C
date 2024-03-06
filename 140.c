//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void sirala(int dizi[], int N) {
    int gecici;
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (dizi[i] > dizi[j]) {
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }
    }
}

int main() {
    int N;

    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &N);

    int dizi[N];

    printf("Dizinin elemanlarini girin:\n");
    for (int i = 0; i < N; i++) {
        printf("Eleman %d: ", i+1);
        scanf("%d", &dizi[i]);
    }

    sirala(dizi, N);

    printf("Siralanmis dizi:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
