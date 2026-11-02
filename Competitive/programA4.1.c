#include<stdio.h>

int MultFactor( int iNo)
{
    int iCnt=0;
    int i=1;
    
    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0 )
        {
           i=i*iCnt;
           
        }  
    }
    return i;
    
}
int main()
{int iValue=0;
    int iRet=0;

    printf("Enter your number:");
    scanf("%d",&iValue);

   iRet= MultFactor(iValue);
   printf("%d",iRet);

    return 0;
}