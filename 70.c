//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int topla(int a, int b) {
  return a + b;
}

int cikar(int a, int b) {
  return a - b;
}

int carp(int a, int b) {
  return a * b;
}

float bol(int a, int b) {
  return (float)a / b;
}

int main() {

  int sayi1, sayi2;

    printf("İki sayı giriniz: ");
  scanf("%d %d", &sayi1, &sayi2);

  
  int toplam = topla(sayi1, sayi2);
  int fark = cikar(sayi1, sayi2);
  int carpim = carp(sayi1, sayi2);
  float bolum = bol(sayi1, sayi2);

  printf("Toplam: %d\n", toplam);
  printf("Fark: %d\n", fark);
  printf("Çarpım: %d\n", carpim);
  printf("Bölüm: %.2f\n", bolum);

  return 0;
}




