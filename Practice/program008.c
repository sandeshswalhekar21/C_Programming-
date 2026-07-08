/////////////////////////////////////////////////////////////
//
//  Include Recquired Header Files
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  AddTwoNumbers
//  Input:          float , float
//  OutPut:         float
//  Description:    Performs addition of two floats
//  Date:           08/05/2026
//  Author:         Sandesh Santosh Walhekar
//
/////////////////////////////////////////////////////////////

float AddTwoNumbers(float fNo1,float fNo2)
{
    float fAns=0.0f;

    fAns = fNo1+fNo2;                     //Perform the addition

    return fAns;

}
/////////////////////////////////////////////////////////////
//
//  Application to perform Addition of two float values 
//
/////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;                 //To store first input
    float fValue2 = 0.0f;                 //To store second input
    float fResult = 0.0f;                 //To store result 

    printf("Enter First Number:\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number:\n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1,fValue2);           
    printf("Addition is :%f\n",fResult);

    return 0;
}

/////////////////////////////////////////////////////////////
//
//   Input : 10.0  11.0
//   Output: 21.0
//
/////////////////////////////////////////////////////////////