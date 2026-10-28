#include<stdio.h>

void DisplayConvert( char CValue)
{
    if(CValue== CValue)
    {
        CValue = CValue -32;
        printf("%c",CValue);

    }
}

int main()
{char cValue='\0';

    printf("Enter your Character:");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}