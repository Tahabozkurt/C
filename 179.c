//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int faktoriyel(int *sayi) {
    int sonuc = 1;
    int i;
    for (i = *sayi; i >= 1; i--) {
        sonuc *= (*sayi);
        (*sayi)--;
    }
    return sonuc;
}

int main() {
    int n, orijinal_sayi;

    printf("Lutfen faktoriyel alinacak sayiyi giriniz: ");
    scanf("%d", &n);
    orijinal_sayi = n;

    printf("%d! = %d\n", orijinal_sayi, faktoriyel(&n));

    return 0;
}
