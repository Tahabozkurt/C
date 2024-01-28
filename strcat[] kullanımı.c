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
    char mesaj1[] = "bozkurt";
    char mesaj2[] = " Taha ";

    strcat(mesaj1, mesaj2);

    printf("Eklenmiş mesaj: %s\n", mesaj1);



  return 0;
}

