//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
  float genislik, uzunluk, fiyat, toplamFiyat;

  
  printf("Halının genişliğini giriniz (metre): ");
  scanf("%f", &genislik);
  printf("halının uzunluğunu giriniz (metre): ");
  scanf("%f", &uzunluk);
  printf("Halının metrekare fiyatını giriniz(TL): ");
  scanf("%f", &fiyat);

    toplamFiyat = genislik * uzunluk * fiyat;


  printf("Halının toplam fiyatı: %.2f TL\n", toplamFiyat);

  return 0;
}
