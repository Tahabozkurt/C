//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
  float yaricap, alan;

  
  printf("Dairenin yarıçapını giriniz: ");
  scanf("%f", &yaricap);

  alan = 3.14159 * yaricap * yaricap;

  printf("Dairenin alanı: %.2f\n", alan);

  return 0;
}
