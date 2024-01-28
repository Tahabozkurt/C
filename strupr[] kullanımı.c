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
    char mesaj[] = "merhaba dünya!";

    strupr(mesaj);

    printf("Büyük harfe çevrilmiş mesaj: %s\n", mesaj);

    return 0;
}

