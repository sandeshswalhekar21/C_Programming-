#include<stdio.h>


int OddFactorial(int iNo)
{
    int iCnt=0;
   int  iOddFact=1;
   
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2 )!= 0)
        {
            iOddFact=iOddFact*iCnt;
        }
    }
    return iOddFact;
}

int main()
{
    int iValue;
    int iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

   iRet=OddFactorial(iValue);
   printf("Odd Factorial is:%d",iRet);

    return 0;
}