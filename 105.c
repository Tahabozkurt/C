//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  float mesafe, sure, ortalamaHiz;

  
  printf("Kat edilen mesafeyi giriniz (km): ");
  scanf("%f", &mesafe);
  printf("Geçen süreyi giriniz (saat): ");
  scanf("%f", &sure);

  ortalamaHiz = mesafe / sure;

  printf("Ortalama hız: %.2f km/saat\n", ortalamaHiz);

  return 0;
}
