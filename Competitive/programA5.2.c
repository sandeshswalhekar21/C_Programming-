#include<stdio.h>

void DisplayNum(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
        

    }
}

int main()
{
    int iValue;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayNum(iValue);

    return 0;
}