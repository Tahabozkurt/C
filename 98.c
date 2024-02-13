//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
  float uzunluk, genislik, derinlik, hacim;

  
  printf("Havuzun uzunluğunu giriniz: ");
  scanf("%f", &uzunluk);
  printf("Havuzun genişliğini giriniz: ");
  scanf("%f", &genislik);
  printf("Havuzun derinliğini giriniz: ");
  scanf("%f", &derinlik);

    hacim = uzunluk * genislik * derinlik;

  
  printf("Havuzun hacmi: %.2f metreküp\n", hacim);

  return 0;
}
