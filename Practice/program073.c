#include<stdio.h>

void Display(int Arr[])
{
   printf("%d\n",*Arr);
   
   Arr++;
   printf("%d\n",*Arr);

   Arr++;
   printf("%d\n",*Arr); 
}
int main()
{
    
    int Arr[5]={10,20,30,40,50};

    

    Display(Arr);

    return 0;
}