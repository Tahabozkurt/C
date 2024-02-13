//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  int kenar;

  printf("Karenin kenar uzunluğunu giriniz: ");
  scanf("%d", &kenar);

  int alan = kenar * kenar;

  printf("Karenin alanı: %d\n", alan);

  return 0;
}
