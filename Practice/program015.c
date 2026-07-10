
#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
     if( (iNo % 2) == 0)
     {
        return true;
     }
     else
     {
        return false;
     }

     
}

int main()
{
    int iValue = 0;
    bool bRet = false;
   
    
    printf("Enter Number to check whether it is EVEN or ODD :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet)                                // if bRet is true then it goes in {}
    {
     printf("%d is EVEN",iValue);
    }
    else
    {
      printf("%d is ODD",iValue);
    }
    
    return 0;

}