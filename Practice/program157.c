#include<stdio.h>

typedef unsigned int UINT;                           


int main()
{
    UINT iNo = 0;
    UINT iAns=0;
    UINT iMask = 0X40;                        
   

    printf("Enter  Number:");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {
        printf("Seventh Bit is on:");
    }else{
        printf("Seventh Bit is off");
    }
   

    return 0;
}