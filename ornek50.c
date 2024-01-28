//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main()
{
    int mat[10][10];
    int x,y;
    
    for(x=0;x<10;x++)
    {
        for(y=0;y<10;y++)
        {
            if(x==y)
            {
                mat[x][y]=1;
            }
            else
            {
                mat[x][y]=0;
            }
        }
        
        
    }
    for(x=0;x<10;x++)
    {
        for(y=0;y<10;y++)
        {
           printf("%4d",mat[x][y]);
           
        }
        printf("\n");
        
    }

    return 0;
}
