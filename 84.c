//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//


#include <stdio.h>

int main() {

  int a, b, c, x, sonuc;

  printf("a, b, c ve x sayılarını giriniz: ");
  scanf("%d %d %d %d", &a, &b, &c, &x);

  sonuc = a * x * x + b * x + c;

  printf(">> Sonuç: %d", sonuc);

  return 0;
}

