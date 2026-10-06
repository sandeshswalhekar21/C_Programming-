#include<stdio.h>

typedef unsigned int UINT;                           


int main()
{   
   UINT iMask = 0;
   UINT iNo = 0;

  printf("Enter Number:\n");
  scanf("%d",&iNo);

  iMask = 0x8;                  // 4th

  iNo = iNo ^ iMask;

  printf("Updated Number:%d",iNo);


     
     return 0; 
} 