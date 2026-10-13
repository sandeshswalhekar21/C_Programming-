#include<stdio.h>

typedef unsigned int UINT;                           

// position 21 and 27       

int main()
{   
   UINT iMask = 0x04100000;
   UINT iResult =0;
   UINT iNo = 0;

   printf("Enter Number :\n");
   scanf("%d",&iNo);

   iResult = iNo ^ iMask;

   printf("updated number :%d\n",iResult);


     
     return 0; 
             
} 