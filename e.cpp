#include<iostream>
#include<conio.h>
using  namespace  std;
int main()

{
    int  Amount ,a, Discount;
    float   Bill;
    cout<<" Enter the Amount ";
    cin>>Amount;
    if(Amount<=1000)
    {
        Discount = a*100/100;

    }
    else 
    {
        Discount = a*20/100;

    }
    Bill = Amount - Discount ;
    cout<<" total Amount " <<Bill;
    getch();
}