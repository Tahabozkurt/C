//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  int sayi, basamakSayisi = 0;

  printf("Bir sayi giriniz: ");
  scanf("%d", &sayi);

    if (sayi == 0) {
        basamakSayisi = 1;
    }
  else {
    while (sayi != 0) {
      sayi /= 10;
      basamakSayisi++;
    }
  }

  printf("Girdiginiz sayinin basamak sayisi: %d\n", basamakSayisi);

  return 0;
}
