//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

#define PI 3.1415926535

#define YARICAP(alan) (((alan) / PI) ** 0.5)

int main() {
  double alan;

  printf("Dairenin alanını giriniz: ");
  scanf("%lf", &alan);

  printf("Yarıçap: %.2f\n",YARICAP(alan));

  return 0;
}


