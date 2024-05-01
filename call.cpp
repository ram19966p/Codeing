#include<iostream>
using namespace std;
void swap ( int &x ,int &y);
int main()
{
    int a, b;
    cout<<" Enter first value a";
    cin>>a;
    cout<<"Enter the second value b";
    cin>>b;
       swap(a,b);
       cout<<"\n in value of a is : "<<a;
       cout<<"\n in value of b is : "<<b;

}
 void swap( int  &x ,int &y)
 {
    int t;
    t= x; 
     x= y;
      y = t;
 }