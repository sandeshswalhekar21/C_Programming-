#include<stdio.h>
#include<stdlib.h>
//time complexity is O(N)
int  Factorial(int iNo)
{
    int iCnt=0;
    int iMul=1;
    iNo=abs(iNo);                     // to convert - into +
    
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        iMul=iMul*iCnt;       
    }
    return iMul; 
}

int main()
{
    int iValue;
    int iRet=0;

    printf("Enter number of pattern:\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial is :%d",iRet);

    return 0;
}