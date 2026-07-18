//input :8
//output:  -8-7-6-5-4-3-2-1 0 

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt =-iNo; iCnt<=0 ; iCnt = iCnt+2)  //
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter nubmer :");
    scanf("%d",&iValue);
    Display(iValue);



    return 0;
}