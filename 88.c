//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//


#include <stdio.h>

int main() {
  int baslangicSayisi, bitisSayisi, sayi;

  printf("Başlangıç sayısını giriniz: ");
  scanf("%d", &baslangicSayisi);

  printf("Bitiş sayısını giriniz: ");
  scanf("%d", &bitisSayisi);

  sayi = baslangicSayisi;

  while (sayi >= bitisSayisi) {
    printf("%d\n", sayi);
    sayi--;
  }

  return 0;
}
