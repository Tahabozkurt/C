//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

double f(double x) {
  return x * x * x + 13 * x * x + 47 * x + 5;
}

int main() {
  double x;

  printf("Bir reel sayi giriniz: ");
  scanf("%lf", &x);

  
  double sonuc = f(x);

  printf("f(%lf) = %lf\n", x, sonuc);

  return 0;
}
