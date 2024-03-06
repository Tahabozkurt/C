//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void fibonacci(int n) {
    int onceki = 0, sonraki = 1, sonraki_sayi;

    printf("Fibonacci Sayilari:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", onceki);
        sonraki_sayi = onceki + sonraki;
        onceki = sonraki;
        sonraki = sonraki_sayi;
    }
    printf("\n");
}

int main() {
    int adet;

    printf("Kac adet Fibonacci sayisi uretmek istiyorsunuz? ");
    scanf("%d", &adet);

    if (adet <= 0) {
        printf("Lutfen pozitif bir sayi girin.\n");
        return 0;
    }

    fibonacci(adet);

    return 0;
}

