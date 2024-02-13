//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
  float sayi1, sayi2, sayi3, ortalama;

  printf("Birinci sayıyı giriniz: ");
  scanf("%f", &sayi1);
  printf("İkinci sayıyı giriniz: ");
  scanf("%f", &sayi2);
  printf("Üçüncü sayıyı giriniz: ");
  scanf("%f", &sayi3);

  ortalama = (sayi1 + sayi2 + sayi3) / 3;

  printf("Üç sayının ortalaması: %.2f\n", ortalama);

  return 0;
}
