/*
    START
    Accept number as No
    If No is copmpelety divisibly by 2 
       then print even 
    otherwise
       print odd
    STOP

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

int main()
{
    int iValue = 0;
    int iRemainder=0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("EVEN Number:\n");
    }
    else
    {
        printf("ODD Number:\n");
    }
    return 0;

}