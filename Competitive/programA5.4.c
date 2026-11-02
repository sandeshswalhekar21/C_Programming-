#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt < iNo;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue;

    printf("Enter number of pattern:\n");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return 0;
}