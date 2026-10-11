#include<stdio.h>

typedef unsigned int UINT;                           

// position 3 and 7         0000 0000 0000 0000 0000 0000 0100 0100
int main()
{   
   UINT iMask = 0x00000044;
   UINT iResult =0;
   UINT iNo = 0;

   printf("Enter Number :\n");
   scanf("%d",&iNo);

   iResult = iNo ^ iMask;

   printf("updated number :%d\n",iResult);


     
     return 0; 
             
} 