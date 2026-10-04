#include<stdio.h>

typedef unsigned int UINT;                           


int main()
{
    UINT iNo = 0;              
    UINT iAns=0;               
    UINT iMask = 0X10000;                             
   

    printf("Enter  Number:");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {
        printf("17th Bit is on:");
    }else{
        printf("17th Bit is off");
    }
   

    return 0;
}