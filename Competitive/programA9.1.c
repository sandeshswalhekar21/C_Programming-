#include<stdio.h>

int countEven(int iNo)
{
    
    int idigit=0;
    int iCnt=0;

    while(iNo !=0)
    {
    idigit=iNo%10;

      if(idigit % 2 ==0)
      {
        iCnt++;
      }
    iNo=iNo/10;
    }

    return iCnt;

    
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = countEven(iValue);
    printf("Even digit are:%d",iRet);



    return 0;
}