#include<stdio.h>

void DisplayNumberLine(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt);
        

    }
}

int main()
{
    int iValue;

    printf("Enter number for numberline:\n");
    scanf("%d",&iValue);

    DisplayNumberLine(iValue);

    return 0;
}