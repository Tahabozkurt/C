//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    int urun_kodu;
    float fiyat, vergi_orani, toplam_fiyat;

    printf("Ürün kodunu girin (0: Kitap, 1: Temel Gıda, 2: Lüks): ");
    scanf("%d", &urun_kodu);
    printf("Fiyatı girin: ");
    scanf("%f", &fiyat);

    switch (urun_kodu) {
        case 0:
            vergi_orani = 4.0;
            break;
        case 1:
            vergi_orani = 5.6;
            break;
        case 2:
            vergi_orani = 19.6;
            break;
        default:
            printf("Hatalı ürün kodu girişi.\n");
            return 1;
    }

    float vergi_miktari = fiyat * (vergi_orani / 100);

    toplam_fiyat = fiyat + vergi_miktari;

    printf("Ürün fiyatı: %.2f TL\n", toplam_fiyat);

    return 0;
}
