//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char metin1[] = "Merhaba Dünya!";
  char metin2[] = "Merhaba Dünya!";

  int fark = strncmp(metin1, metin2, 7);

  printf("Fark: %d\n", fark);

  return 0;
}

