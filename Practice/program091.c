
#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt] % 2 !=0)
       {
        iSum = iSum+Arr[iCnt];
       }
    }
    return iSum;
}

int main()
{ 
    int *Brr=NULL;
    int iLength=0;
    int iCnt = 0;
    int iRet=0;

    printf("Enter your size of element\n");
    scanf("%d",&iLength);

    Brr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter the elements:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    iRet = SumOdd(Brr,iLength);
    printf("Sum of Odd elements is is:%d\n",iRet);

    free(Brr);

    return 0;
}