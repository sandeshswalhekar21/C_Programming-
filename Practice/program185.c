#include<stdio.h>

typedef unsigned int UINT;                           

// position 12 and 23       

int main()
{   
   UINT iMask = 0x00400800;
   UINT iResult =0;
   UINT iNo = 0;

   printf("Enter Number :\n");
   scanf("%d",&iNo);

   iResult = iNo ^ iMask;

   printf("updated number :%d\n",iResult);


     
     return 0; 
             
} 