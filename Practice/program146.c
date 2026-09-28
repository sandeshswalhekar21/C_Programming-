#include<stdio.h>

int main()
{
    int No1 = 0, No2=0;
    int Ans=0;

    printf("Ener first Number:");
    scanf("%d",&No1);

     printf("Ener Second Number:");
    scanf("%d",&No2);

    Ans = No1 & No2;
    printf("AND is:%d\n",Ans);

     Ans = No1 | No2;
    printf("OR is:%d\n",Ans);

      Ans = No1 ^ No2;
    printf("XOR is:%d\n",Ans);

    

    return 0;
}