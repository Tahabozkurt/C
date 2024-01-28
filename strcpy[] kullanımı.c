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
    char mesaj1[] = "taha";
    char mesaj2[20];

    strcpy(mesaj2, mesaj1);

    printf("Kopyalanmış mesaj: %s\n", mesaj2);

  return 0;
}

