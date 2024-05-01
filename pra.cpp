#include<iostream>
using namespace std;
 int main()
 {
    int x , y ;
    long t=1;
    cin>>y;
    for(x=y;x>=1;x=x-1)
    {
     
      //r=y*x;
      t=t*x;
       cout<<" X "<<x;
    }
    cout<<"\n Total number is " <<t;
    return 0;
 }