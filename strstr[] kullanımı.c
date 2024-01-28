//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <string.h>

int main() {
  char insan[] = "Bu bir insandır.";
  char aranan[] = "taha";

  char *sonuc = strstr(insan, aranan);

  if (sonuc != NULL) {
    printf("'taha' dizisi 'insan' dizisinde şu konumda bulundu: %d\n", sonuc - insan);
  } else {
    printf("'taha' dizisi 'insan' dizisinde bulunamadı.\n");
  }

  return 0;
}


