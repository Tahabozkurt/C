//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

double us(double taban, int us) {
    double sonuc = 1.0;

    for (int i = 0; i < us; i++) {
        sonuc *= taban;
    }

    return sonuc;
}

int main() {
    double taban;
    int us;

    // Kullanıcıdan taban ve üs değerlerini alma
    printf("Taban degerini giriniz: ");
    scanf("%lf", &taban);

    printf("Us degerini giriniz: ");
    scanf("%d", &us);

    printf("%.2lf^%d = %.2lf\n", taban, us, us(taban, us));

    return 0;
}
