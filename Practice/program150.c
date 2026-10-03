#include<stdio.h>


int main()
{
    unsigned int iNo = 0;
    unsigned int iAns=0;
    unsigned int iMask = 4;
   

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