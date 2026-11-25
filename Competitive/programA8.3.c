#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMet = 0;
    iMet = iNo * 1000;
    
    return iMet;   
}

int main()
{
  int iValue=0;
  int iRet=0;

    printf("Enter Kilometer :\n");
    scanf("%d",&iValue);

   iRet=KMtoMeter(iValue);
   printf("Kilometer to meter is%d",iRet);

    return 0;
}