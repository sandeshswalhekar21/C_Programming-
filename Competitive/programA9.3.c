#include<stdio.h>

int countEven(int iNo)
{
    
    int idigit=0;
    int iCnt=0;
    int iCount=0;

   for(iCnt=0;iNo!=0;iCnt++)
   {
    idigit = iNo%10;
    if(idigit == 3||idigit==7)
    {
        iCount++;
    }
    iNo=iNo/10;
   }
   return iCount;

    
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