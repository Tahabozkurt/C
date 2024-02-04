//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdio.h>

void artir(int *sayi) {
  
  *sayi = *sayi + 1;
}

int main() {
  int sayi = 10;

  artir(&sayi);

  printf("Sayi: %d\n", sayi);

  return 0;
}




