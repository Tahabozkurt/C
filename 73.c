//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int kareAl(int sayi) {
  return sayi * sayi;
}

int main() {
  int x = 5;
  int kare = kareAl(x);

  printf("%d'nin karesi: %d\n", x, kare);

  return 0;
}




