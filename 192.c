//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x_ekseni;
    float y_ekseni;
} nokta;

int main() {
    nokta taha;
    taha.x_ekseni = 3.154446545;
    taha.y_ekseni = 2.26474186;
    printf("X eksenimiz %.2f Y eksenimiz %.2f", taha.x_ekseni, taha.y_ekseni);
    return 0;
}
