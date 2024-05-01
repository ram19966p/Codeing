#include <iostream>
#include <conio.h>
using namespace std;
 

 class Demo
 {
     int a, b ;
     public:
     Demo(int x , int y)
     {
         a = x; 
         b = y;


     }
     void show()
     {
        cout<<"\n a "<<a<<"\n b "<<b<<endl;
     }
     friend void operator-(Demo &obj);

 };
 void operator -(Demo &obj)

 {
 obj.a=-obj.a;
 obj.b=+obj.b;

 }

 int  main()
 {
    Demo ob(10 ,20);
    ob.show();
    -ob;
    ob.show();
    getch();
    return 0;
 }