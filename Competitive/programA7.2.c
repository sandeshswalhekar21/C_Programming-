#include<stdio.h>


int DollarToINR(int iNo)
{
    
   if(iNo > 0)
   {
    iNo =( iNo * 70); 
   }
   return iNo; 
}

int main()
{
    int iValue;
    int iRet=0;

    printf("Enter number of pattern:\n");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);
    printf("Dollar into INR :%d",iRet);

    return 0;
}