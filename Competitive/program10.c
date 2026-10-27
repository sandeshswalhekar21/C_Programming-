#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;

BOOL Display(int iNo)
{
    
    if(iNo %2==0)
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
    int iRet = false;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Display(iValue);
    if(iRet == true)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}