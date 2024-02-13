//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//


#include <stdio.h>

int main() {

  int a, b, h, tabanAlani, yanalAlanlarToplami, toplamAlani, hacim;

  printf("Dikdörtgen prizmanin a, b ve h kenar uzunluklarini giriniz: ");
  scanf("%d %d %d", &a, &b, &h);

  tabanAlani = a * b;
  yanalAlanlarToplami = 2 * (a + b) * h;
  toplamAlani = tabanAlani + yanalAlanlarToplami;
  hacim = a * b * h;

  printf("Dikdörtgen prizmanin:\n\n");
  printf("Taban alani: %d\n", tabanAlani);
  printf("Yanal alanlar toplami: %d\n\n", yanalAlanlarToplami);
  printf("Toplam alani: %d\n\n", toplamAlani);
  printf("Hacmi: %d\n", hacim);

  return 0;
}
