//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  char mesaj[100];
  FILE *dosya;

  dosya = fopen("mesaj.txt", "r");

  fgets(mesaj, 100, dosya);

  printf("Dosyadan okunan mesaj: %s\n", mesaj);

  fclose(dosya);

  return 0;
}




