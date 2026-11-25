#include<stdio.h>

int countOdd(int iNo)
{
    int iCnt=0;
    int idigit=0;
    int OddCnt=0;

    for(iCnt=0;iNo!=0;iCnt++)
    {
        idigit=iNo%10;
        if(idigit % 2 !=0)
        {
            OddCnt++;
        }
        iNo=iNo/10;
    }
    return OddCnt;
   

    
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = countOdd(iValue);
    printf("Odd digit are:%d",iRet);



    return 0;
}