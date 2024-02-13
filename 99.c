//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
  int a, b, temp;

 
  printf("Birinci sayıyı giriniz: ");
  scanf("%d", &a);
  printf("İkinci sayıyı giriniz: ");
  scanf("%d", &b);

  temp = a;
  a = b;
  b = temp;

  printf("Birinci sayı: %d\n", a);
  printf("İkinci sayı: %d\n", b);

  return 0;
}
