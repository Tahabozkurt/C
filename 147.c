//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void kelebek(int n) {
  int i, j;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (i = n - 1; i >= 1; i--) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main() {
  int n;

  printf("Kelebek boyutunu giriniz (tek sayı): ");
  scanf("%d", &n);

  kelebek(n);

  return 0;
}
