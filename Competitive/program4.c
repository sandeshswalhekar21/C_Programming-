#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

 bool Check(int iNo)
 {
    if(iNo % 5 == 0)
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
    bool iRet = false;

    printf("Enter Nubmer");
    scanf("%d",&iValue);

    iRet=Check(iValue);

    if(iRet == true)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
    return 0;
}