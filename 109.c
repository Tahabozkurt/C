//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <math.h>

int main() {
    float sayi;

    while (1) {
        printf("Pozitif bir sayı girin : ");
        scanf("%f", &sayi);

        if (sayi == 0) {
            printf("Program sonlandırılıyor...\n");
            break;
        } else if (sayi < 0) {
            printf("Negatif bir sayı girdiniz. Lütfen pozitif bir sayı girin.\n");
            continue;
        } else {

            float karekok = sqrt(sayi);
            printf("Girdiğiniz sayının karekökü: %.2f\n", karekok);
        }
    }

    return 0;
}
