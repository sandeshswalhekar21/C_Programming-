#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

 bool ChkVowel(char CVaule)
 {
    
    if (CVaule=='a'|| CVaule=='e' || CVaule=='i' || CVaule=='o' || CVaule=='u' )
    {
        return true;
    }
    else
    {
        return false;
    }

 }
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Char : ");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet == true)
    {
        printf("This is vowel");
    }else
    {
        printf("Not Vowel");
    }


    return 0;
}