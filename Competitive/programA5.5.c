#include<stdio.h>

void DisplayMultiple(int iNo)
{
    int iCnt=0;
    int iMul=0;
    for(iCnt=1;iCnt< 6;iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
        iMul = 0;
    }
  
}

int main()
{
    int iValue;

    printf("Enter number of pattern:\n");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);

    return 0;
}