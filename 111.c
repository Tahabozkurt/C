//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

#include <stdio.h>

int main() {
    int sure;
    float ucret;

    printf("Konuşma süresini dakika olarak girin: ");
    scanf("%d", &sure);

    if (sure <= 3) {
        ucret = sure * 0.25;
    } else {
        ucret = 3 * 0.25 + (sure - 3) * 0.08;
    }

    printf("Telefon görüşmesinin ücreti: %.2f TL\n", ucret);

    return 0;
}
