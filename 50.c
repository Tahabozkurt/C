//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main()
{
    float a,b;
    char op;
    
    
    printf("please enter a operator (+,-,*,/):");
    scanf("%c",&op);
    

    printf("please enter two number\n");
    scanf("%f%f", &a, &b);
    
    switch (op) {
        case '+':printf("%.2f + %.2f = %.2f\n",a,b,a+b);
            break;
        case '-':printf("%.2f - %.2f = %.2f\n",a,b,a-b);
            break;
        case '*':printf("%.2f * %.2f = %.2f\n",a,b,a*b);
            break;
        case '/':printf("%.2f / %.2f = %.2f\n",a,b,a/b);
        default:
            break;
    }

    return 0;
}
