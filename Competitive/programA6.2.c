#include<stdio.h>
// timecomplexity is O(1)
void NumberToWord(int iNo)
{
   if(iNo < 0 || iNo > 9)
   {
    printf("Invalide number ");
   }else{

    switch (iNo)
    {
    case 0:
    printf("zero");
    break;

    case 1:
    printf("one");
    break;

    case 2:
    printf("two");
    break;

    case 3:
    printf("three");
    break;

    case 4:
    printf("four");
    break;

    case 5:
    printf("five");
    break;

    case 6:
    printf("six");
    break;

    case 7:
    printf("seven");
    break;

    case 8:
    printf("eight");
    break;

    case 9:
    printf("nine");
    break;   
         }
   }
    
}

int main()
{
    int iValue;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    NumberToWord(iValue);

    return 0;
}