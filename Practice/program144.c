#include<stdio.h>

int main()
{
    int iNo = 0;
    int idigit = 0;

    printf("Enter number:");
    scanf("%d",&iNo);

    while (iNo != 0)
    {
       idigit = iNo % 2;
       printf("%d",idigit);
       iNo = iNo/2;
    }
    printf("\n");
    
 

    return 0;
} 