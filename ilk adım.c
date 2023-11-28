//
//  main.c
//  C dili eğitim
//
//  Created by Taha Bozkurt on 26.11.2023.
//

#include <stdio.h>

int main(void)
{
    int ilksayım;
    float ikincisayım;
    char basharf;
    
    printf("ilk sayıyı giriniz\n");
    scanf("%d", &ilksayım);
    printf("ilk sayım= %d\n",ilksayım);
 
    printf("ikinci sayıyı giriniz\n");
    scanf("%f", &ikincisayım);
    printf("ikinci sayım= %f\n",ikincisayım);
    
    printf("baş harfini gir\n");
    scanf(" %c",&basharf);
    printf("baş harfiniz= %c\n",basharf);
    

return 0;
}

