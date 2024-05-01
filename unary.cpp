#include <iostream>
#include <conio.h>
using namespace std;
 
 class demo
 {
       int a, b;
       public:
       demo(int x , int y )
       {
         a= x;
         b= y;
       }
        void show()
        {
            cout<<" \na "<<a<<" \nb "<<b<<endl;
        
        }
        void operator-()
        {
            a=-a;
            b=-b;
        
        }
 };
 int main()
 {

    //clrscr();
    demo ob(10 ,20);
    ob.show();
    -ob;
    ob.show();
    getch();
 }