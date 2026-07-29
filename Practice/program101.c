#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int Arr[],int iSize )
{
    int iCnt=0;
    int iMin = 0;

    iMin = Arr[0];
    
     
    for(iCnt=0;iCnt<iSize;iCnt++)
    {   
       if(Arr[iCnt] < iMin )
       {
        iMin = Arr[iCnt];
       } 
    }
    return iMin;
   
}

int main()
{ 
    int *Brr=NULL;
    int iLength=0;
    int iCnt = 0;
    int iRet = 0;
    

    printf("Enter your size of element\n");
    scanf("%d",&iLength);

    Brr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter the elements:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = LinearSearch(Brr,iLength);
    
    
        printf(" Minimum element  is :%d",iRet);
    
    free(Brr);

    return 0;
}