#include<stdio.h>

//time complexity is 2(N)
void DisplayPattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");

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