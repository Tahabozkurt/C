//
//  main.c
//  taa
//
//  Created by Taha Bozkurt on 28.11.2023.
//

#include <stdio.h>

int main(void) {

    int x;
    int y;
    
    printf("please enter volue of x = \n");
    scanf("%d", &x);
    
    printf("please enter volue of y = \n");
    scanf("%d", &y);
    
    if(x < y)
    {
        printf("x volue is smaller than y volue \n");
    }
    else if(x == y)
    {
        printf("x volue equal to y volue \n");
    }
    else
    {
        printf("x volue is bigger than y volue \n");
    }
  
    return 0;
}
