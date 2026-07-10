
#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
     int iRemainder=0;

     iRemainder = iNo % 2;

     if(iRemainder == 0)
     {
        return true;
     }
     else
     {
        return false;
     }

     return iRemainder;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
   
    
    printf("Enter Number to check whether it is EVEN or ODD :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
     printf("%d is EVEN",iValue);
    }
    else
    {
      printf("%d is ODD",iValue);
    }
    
    return 0;

}