#include <iostream>
using namespace std; 
int main ()
{
     
     int v,  a;
     long t=1;
     cout<<" Enter the num is : >>";
     cin>>a;
     for( v=a; v>=1; v=v-1)
     {
       
       t=t*v;
       cout<< "  X  " <<v;
     }
     cout<<" \n Total num is " " =  "<< t;
    
     return 0;
}