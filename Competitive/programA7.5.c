#include<stdio.h>


int FactDiff(int iNo)
{
    int iCnt=0;
   int  iEvenFact=1;
   int iOddFact=1;
   int iFactDiff=0;
   
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact=iEvenFact*iCnt;
        }else//((iCnt % 2 )!= 0)
        {
            iOddFact=iOddFact*iCnt;
        }
    }
    iFactDiff=iOddFact-iEvenFact;
    return iFactDiff;  
   
}

int main()
{
    int iValue;
    int iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

   iRet=FactDiff(iValue);
   printf("Differanc between factorial is:%d",iRet);

    return 0;
}