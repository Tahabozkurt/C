//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    int taha[7];
    int *sayil, *sayi2;
    int n;
    int gecici;
    
    printf("Lutfen dizimizin eleman sayisini giriniz: ");
    scanf("%d", &n);
    
    for (sayil = taha; sayil < taha + n; sayil++) {
        printf("Lutfen eleman giriniz: ");
        scanf("%d", sayil);
    }
    
    printf("Dizimizin ilk hali:\n");
    for (sayil = taha; sayil < taha + n; sayil++) {
        printf("%d ", *sayil);
    }
    printf("\n");
    
    for (sayil = taha, sayi2 = taha + n - 1; sayil < sayi2; sayil++, sayi2--) {
        gecici = *sayil;
        *sayil = *sayi2;
        *sayi2 = gecici;
    }
    
    printf("Dizimizin elemanlari degistirildikten sonraki hali:\n");
    for (sayil = taha; sayil < taha + n; sayil++) {
        printf("%d ", *sayil);
    }
    printf("\n");
    
    return
}
