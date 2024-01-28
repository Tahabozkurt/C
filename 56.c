//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>
#include <stdlib.h>


int main() 
{
    
    int taa[10];
    int i;
    
    for(i=0;i<10;i++)
    {
        taa[i]=2*i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",taa[i]);
    }
    
  return 0;
}

