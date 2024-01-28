//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main()
{
    int dizi1[2][3]={{1,2,3},{2,3,4}};
    int dizi2[2][3]={{4,5,6},{2,5,9}};
    int toplam[2][3];
    int x,y;
    
    for(x=0;x<2;x++)
    {
        for(y=0;y<3;y++)
        {
            toplam[x][y]=dizi1[x][y]+dizi2[x][y];        }
        }
    
        for(x=0;x<2;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("%4d",toplam[x][y]);
        }
        printf("\n");
    }
    return 0;
}
