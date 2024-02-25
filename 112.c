//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    char op;
    float a, b, sonuc;

    printf("Toplama (+) veya çıkarma (-) operatörünü girin: ");
    scanf("%c", &op);
    printf("a ve b değerlerini girin: ");
    scanf("%f %f", &a, &b);

    if (a == 0 || b == 0) {
        printf("Hata: a veya b değeri sıfır olamaz.\n");
        return 1;
    }

    switch (op) {
        case '+':
            sonuc = 1 / a + 1 / b;
            printf("Sonuç: %.2f\n", sonuc);
            break;
        case '-':
            sonuc = 1 / a - 1 / b;
            printf("Sonuç: %.2f\n", sonuc);
            break;
        default:
            printf("Hata: Geçersiz operatör girdisi.\n");
            return 1; 
    }

    return 0;
}
