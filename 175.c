//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    int arr[100];
    int N;
    int *ptr = arr;

    printf("Dizi kac elemanli olsun: ");
    scanf("%d", &N);

    printf("Lutfen elemanlari giriniz:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    printf("Girdiginiz elemanlar:\n");
    ptr = arr; 
    for (int i = 0; i < N; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
