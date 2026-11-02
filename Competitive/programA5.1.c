#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
        printf("$\t");

    }
}

int main()
{
    int iValue;

    printf("Enter number of pattern:\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}