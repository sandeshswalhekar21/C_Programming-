/*
   

    START
     Accept number as No
     divide No by 2
     If remainder is 0
        then  print as even 
     otherwise
         print as odd   
    STOP

*/


#include<stdio.h>

void CheckEvenOdd(int iNo)
{
     int iRemainder=0;

    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
        printf("EVEN Number:\n");
    }
    else
    {
        printf("ODD Number:\n");
    }
}

int main()
{
    int iValue = 0;
   
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);

   CheckEvenOdd(iValue);
    return 0;

}