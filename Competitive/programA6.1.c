#include<stdio.h>
// timecomplexity is O(1)
void Number(int iNo)
{
    if(iNo<=50)
    {
        printf("Small");
    }
    else if((iNo>=50) && (iNo<=100))
    {
        printf("Medium");
    }
    else{
        printf("Large");
    }
    
}

int main()
{
    int iValue;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}