#include<stdio.h>
//O(N) N=10.
void Table(int iNo)
{
    int iCnt=0;
    int iMul=0;
   for(iCnt=1;iCnt<=((10*iNo)/2);iCnt++)
   {
    iMul=iNo*iCnt;
    printf("%d\t",iMul);
   }
  
}

int main()
{
    int iValue;

    printf("Enter number for Table:\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}