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
  
  printf("please enter a number;");
  scanf("%d",&number);
  
  int i=1;
  
  while(i<=10)
  {
      printf("%d\n",i*number);
      i++;
  }

    
    return 0;
    
}
