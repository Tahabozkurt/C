//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main()
{
    int number1,number2;
    printf("please enter two numbers");
    scanf("%d%d",&number1,&number2);
    
    if(number1 >= number2)
    {
        if(number1 == number2)
        {
            printf("result: %d = %d\n",number1,number2);
        }
        else
        {
            printf("result: %d > %d\n",number1,number2);
        }
    }
    else
    {
        printf("result: %d < %d\n",number1,number2);
    }
    
    

    return 0;
}

