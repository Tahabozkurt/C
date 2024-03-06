//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int buyukBul(int sayi1, int sayi2) {
    if (sayi1 > sayi2) {
        return sayi1;
    } else {
        return sayi2;
    }
}

int main() {
    int sayi1, sayi2;
    
    printf("İki tam sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);
    
    int buyuk = buyukBul(sayi1, sayi2);
    
    printf("Büyük olan sayi: %d\n", buyuk);
    
    return 0;
}



