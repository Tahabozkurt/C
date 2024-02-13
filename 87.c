//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//


#include <stdio.h>

int main() {
  int num1, num2;

  printf("1. sayıyı giriniz: ");
  scanf("%d", &num1);

  printf("2. sayıyı giriniz: ");
  scanf("%d", &num2);

  if (num1 == num2) {
    printf("%d ve %d sayıları eşittir.", num1, num2);
  } else if (num1 > num2) {
    printf("%d, %d'den büyüktür.", num1, num2);
  } else {
    printf("%d, %d'den küçüktür.", num1, num2);
  }

  return 0;
}
