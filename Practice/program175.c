#include<stdio.h>

typedef unsigned int UINT;                           

// position 13
int main()
{   
   UINT iMask = 0xFFFFEFFF;
   UINT iNo = 0;
   UINT  iPos = 0;

  printf("Enter Number:\n");
  scanf("%d",&iNo);

    printf("Enter bit position:\n");
  scanf("%d",&iPos);

  iMask = iMask <<(iPos -1);           

  iNo = iNo ^ iMask;

  printf("Updated Number:%d",iNo);


     
     return 0; 
} 