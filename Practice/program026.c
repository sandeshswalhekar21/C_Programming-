#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
   {
   printf("Jay ganesh\n");
   }
}

int main()
{
    
     int iValue=0;

    printf("Enter your frequency: ");
    scanf("%d",&iValue);
    
    Display(iValue);
   
    return 0;
}