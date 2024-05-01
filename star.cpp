#include <iostream>
#include <conio.h>
#include<stdio.h>
using  namespace std;
int main()
 

{
    
int a , b, c;
cin>>b;
for( a=0; a<b; a=a+1)
{
   for( c=1;c<b-a;c=c+1)
{
    cout<<"  " ;
}
  for(int d=0;d<a+1;d=d+1)
{

    cout<<"*" ;
}
cout<<endl;
}
}