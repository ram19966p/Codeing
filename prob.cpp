#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int a,b,c,d;
    cin>>d;
    for( a=0;a<d; a=a+1)
    {
        for(b=1;b<d-a;b=b+1)
        {
            cout<<"  ";
        
        }
        for(c=0; c<a+1; c=c+1)
        {
            cout<<"*"<<"\n";
        }
        
    }
    return 0;

}