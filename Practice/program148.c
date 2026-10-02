#include<stdio.h>

int main()
{
    int iNo = 0,iCount=0,idigit=0;
    int Ans=0;

    printf("Ener  Number:");
    scanf("%d",&iNo);

   while (iNo != 0)
   {
    idigit=iNo % 2;
   
    iCount=iCount+idigit;
    iNo = iNo/2;
    
   }
   printf("Number of 1 are :%d",iCount);
   

    return 0;
}