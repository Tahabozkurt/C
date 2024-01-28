//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char metin1[] = "Merhaba Dünya!";
  char metin2[] = "Merhaba Dünya!";

  int fark = strcmp(metin1, metin2);

  printf("Fark: %d\n", fark);

  return 0;
}
