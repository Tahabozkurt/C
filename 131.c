//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int mukemmelSayi(int sayi) {
    int toplam = 0;
    
    for (int i = 1; i <= sayi / 2; i++) {
        if (sayi % i == 0) {
            toplam += i;
        }
    }
    
    if (toplam == sayi) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int sayi;
    
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    
    if (mukemmelSayi(sayi)) {
        printf("%d mukemmel bir sayidir.\n", sayi);
    } else {
        printf("%d mukemmel bir sayi degildir.\n", sayi);
    }
    
    return 0;
}



