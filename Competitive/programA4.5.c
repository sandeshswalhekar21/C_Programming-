#include<stdio.h>

int FactDiff( int iNo)
{
    int iCnt=0;
    int iNSum=0;
    int iFSum=0;
    int iDiff=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)            
    {
        if( (iNo % iCnt) != 0)
        {
            iNSum=iNSum + iCnt;
        }else{

            iFSum = iFSum+iCnt;
        }
    } 
    iDiff = iNSum - iFSum;

    return iDiff;
     
}
int main()
{ 
    int iValue=0;
    int iRet=0;
    
    printf("Enter your number:");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Difference between Factor and Non Factor is :%d",iRet);
    return 0;
}