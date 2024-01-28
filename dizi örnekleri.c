//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <string.h>

int main() {
  char *isim1 = "Alex";

  char *isim2 = "Souza";

  char *isim3 = strcpy(malloc(strlen(isim1) + strlen(isim2) + 1), isim1);
  strcat(isim3, isim2);

  printf("İki karakter dizisi birleştirilmiş hali: %s\n", isim3);

  return 0;
}



