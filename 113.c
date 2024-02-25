//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    char ch;

    printf("Bir harf girin: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        ch -= 'a' - 'A';
    }

    if (ch >= 'A' && ch <= 'Z') {
        int siradaki_harf = ch - 'A' + 1;
        printf("%c harfi %d. harftir.\n", ch, siradaki_harf);
    } else {
        printf("Hata: Lütfen bir harf girin.\n");
    }

    return 0;
}
