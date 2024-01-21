//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include "22.h"
#include <stdio.h>

int main()
{
    int number;
    printf("please enter a number\n");
    scanf("%d", &number);
    
    if(number%2 == 0)
    {
    printf("%d is even number\n",number);
    }
    else
    {
    printf("%d is odd number\n",number);
    }
    

    return 0;
}
