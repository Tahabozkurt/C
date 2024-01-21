//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main()
{

  int number;
  int i,sum=0;
  
  printf("please enter a number");
  scanf("%d",&number);
  
  for(i=1;i<=number;i++)
  {
      sum = sum + i;
  }
    printf("sum=%d\n", sum);
    
    return 0;
    
}
