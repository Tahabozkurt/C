    //
//  taa.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include "taa.c"

int main()
{
    int a,b,c;
    printf("please enter three numbers");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is the biggest\n",a);
    }
    if(b>a && b>c)
    {
        printf("%d is the biggest\n",b);
    }
    if(c>a && c>b)
    {
        printf("%d is the biggest\n",c);
    }
    if(a == b && a==c)
    {
        printf("%d=%d=%d ",a,b,c);
    }
    

    return 0;
}
