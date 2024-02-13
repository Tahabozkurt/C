//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//


#include <stdio.h>

int main() {
  int n, toplam = 0;

  printf("Bir sayi giriniz: ");
  scanf("%d", &n);

  // 1'den n'e kadar olan tüm sayıları toplama
  for (int i = 1; i <= n; i++) {
    toplam += i;
  }

  printf("1'den %d'e kadar olan tüm sayıların toplamı: %d\n", n, toplam);

  return 0;
}
