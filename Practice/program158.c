#include<stdio.h>

typedef unsigned int UINT;                           


int main()
{
    UINT iNo = 0;
    UINT iAns=0;
    UINT iMask = 0x1;  
     UINT iPos = 0;                        
   

    printf("Enter  Number:");
    scanf("%d",&iNo);

     printf("Enter  Position:");
    scanf("%d",&iPos);

    iMask = iMask<<(iPos - 1);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {
        printf(" Bit is on:");
    }else{
        printf(" Bit is off");
    }
   

    return 0;
}