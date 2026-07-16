//input :8
//output:  1357 

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt<iNo;iCnt+=1) //
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