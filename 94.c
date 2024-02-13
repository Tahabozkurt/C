//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  float kenar;

  printf("Karenin kenar uzunluğunu giriniz (float): ");
  scanf("%f", &kenar);

  float alan = kenar * kenar;

  printf("Karenin alanı: %.2f\n", alan);

  return 0;
}
