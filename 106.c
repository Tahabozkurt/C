//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  int yukseklik, i, j;

  printf("Tower'ın yüksekliğini giriniz: ");
  scanf("%d", &yukseklik);

    for (i = 0; i < yukseklik; i++) {
    for (j = 0; j < yukseklik - i - 1; j++) {
      printf(" ");
    }

    for (j = 0; j < 2 * i + 1; j++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
