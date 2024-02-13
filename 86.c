//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//


#include <stdio.h>

int main() {

  int a, b, c, cevre, alan;

  printf("Üçgenin a, b ve c kenar uzunluklarini giriniz: ");
  scanf("%d %d %d", &a, &b, &c);

  cevre = a + b + c;
  alan = sqrt(10 * (10 - a) * (10 - b) * (10 - c));

  printf("Üçgenin:\n\n");
  printf("Çevresi: %d\n", cevre);
  printf("Alani: %d\n", alan);

  return 0;
}
