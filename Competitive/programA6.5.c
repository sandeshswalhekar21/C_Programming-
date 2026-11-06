#include<stdio.h>
//O(N) N=10.
void RevTable(int iNo)
{
    int iCnt=0;
    int iMul=0;
   for(iCnt=((10*iNo)/2);iCnt>0;iCnt--)
   {
    iMul=iNo*iCnt;
    printf("%d\t",iMul);
   }
  
}

int main()
{
    int iValue;

    printf("Enter number for Reverse Table:\n");
    scanf("%d",&iValue);

    RevTable(iValue);

    return 0;
}