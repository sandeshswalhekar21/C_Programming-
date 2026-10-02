#include<stdio.h>


int main()
{
    int iNo = 0;
    int iAns=0;
    int iMask = 4;
   

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