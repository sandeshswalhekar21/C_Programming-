#include<stdio.h>

typedef unsigned int UINT;                           

int main()
{
    UINT iNo = 0;
    UINT iAns=0;
    UINT iMask = 4;
   

    printf("Ener  Number:");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {
        printf("Third Bit is on:");
    }else{
        printf("Third Bit is off");
    }
   

    return 0;
}