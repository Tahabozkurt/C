//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    int x, y, z, sonuc;

    printf("Lütfen tek haneli üç sayı girin (x y z): ");
    scanf("%1d %1d %1d", &x, &y, &z);

    sonuc = x * 100 + y * 10 + z;

    printf("Oluşturulan sayı: %d\n", sonuc);

    return 0;
}
