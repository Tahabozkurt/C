//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int tekmiciftmi(int taa)
{
    if (taa%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
  
    int sayı,sonuc;
    printf("lütfen bir sayı giriniz\n");
    scanf("%d",&sayı);
    sonuc=tekmiciftmi(sayı);
    if(sonuc==1)
    {
        printf("sayı çift sayıdır\n");
    }
    if (sonuc==0)
    {
        printf("sayı tek sayıdır\n");
    }
  return 0;
}




