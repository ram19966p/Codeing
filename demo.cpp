#include<iostream>
using namespace std;
 
 class Iteam
 {
 private:
      int *p;
 public:
 void f1()
 {
      int *p;
    p=new int[5];
    *(p+0)=10;
    *(p+1)=20;
    *(p+3)=30;
    *(p+4)=40;
    *(p+5)=50;

 }
 void release()
 {
    delete  p;
 }
 };
  ~Item()
 {
    delete []p;
 }
 int fun()
 {
    Item i1;
    i1.f1();
    i1.release();

 }
 
 int main()
 {
    fun();
 }
