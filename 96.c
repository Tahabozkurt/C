//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  float mil;

  printf("Mil cinsinden bir değer giriniz: ");
  scanf("%f", &mil);

  float kilometre = mil * 1.60934;

  printf("%.2f mil, %.3f kilometreye eşittir.\n", mil, kilometre);

  return 0;
}
