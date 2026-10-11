#include<stdio.h>

typedef unsigned int UINT;                           

// position 9 and 17       0000 0000 0000 0001 0000 0001 0000 0000
//   mask = 0x010100
int main()
{   
   UINT iMask = 0x010100;
   UINT iResult =0;
   UINT iNo = 0;

   printf("Enter Number :\n");
   scanf("%d",&iNo);

   iResult = iNo ^ iMask;

   printf("updated number :%d\n",iResult);


     
     return 0; 
             
} 