#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *Brr = NULL;
    int iLength=0;
    int iCnt=0;

//  step1 :Accept the number of elements
    printf("Enter number of element:\n");
    scanf("%d",&iLength);

    //step2 :Allocate memory
    Brr=(int *)malloc(iLength * sizeof(int));

    //Step3: Accept value from user
    printf("Enter the elements:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    //step4: use memory

    //step5: deallocate memory
    free(Brr);

    return 0;
}