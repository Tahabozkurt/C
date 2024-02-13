//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
  int a, b;

  printf("Birinci tam sayiyi giriniz: ");
  scanf("%d", &a);

  printf("Ikinci tam sayiyi giriniz: ");
  scanf("%d", &b);


  int isaret;
  if (a > 0 && b > 0) {
    isaret = 1; 
  } else if (a < 0 && b < 0) {
    isaret = 1;
  } else if (a == 0 || b == 0) {
    isaret = 0;
  } else {
    isaret = -1;
  }

  
  if (isaret == 1) {
    printf("%d ve %d'nin carpimi pozitiftir.\n", a, b);
  } else if (isaret == 0) {
    printf("%d ve %d'nin carpimi sifirdir.\n", a, b);
  } else {
    printf("%d ve %d'nin carpimi negatiftir.\n", a, b);
  }

  return 0;
}
