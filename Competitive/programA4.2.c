#include<stdio.h>

void DecFactor( int iNo)
{
    int iCnt=0;

    for(iCnt=iNo/2;iCnt>0;iCnt--)        //TimeComplexity is O(N/2)
    {
        if(iNo% iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }   
}
int main()
{int iValue=0;
    

    printf("Enter your number:");
    scanf("%d",&iValue);

    DecFactor(iValue);
   

    return 0;
}