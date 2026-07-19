
#include<stdio.h>

void DisolayDigits(int iNo)
{
  int iDigit  = 0;

    while (iNo!=0)
   
   {
    iDigit = iNo%10;
    printf("%d\n",iDigit);
    iNo = iNo/10;
  }

}

int main()
{
    int iValue = 0;
    printf("ENter your value:");
    scanf("%d",&iValue);

    DisolayDigits(iValue);
    
    return 0;
}