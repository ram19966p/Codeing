#include  <iostream>
#include <conio.h>
#include <dos.h>
using namespace std;


struct  node 
{
    int no; 
    node *next;
}
 struct node *start , *newptr , *save , *ptr, rear ;
node *cnn(int);
int ins = 0;
void main ()
{
start  = null ;
char ch = 'Y';
int  n , choice, s;
do 
{ 
    clrscr();
    cout << " \n MENU";
    cout<<" \n\n1.created new node ";
    cin>>choice;
    switch ( choice)
    {
        case 1:
        while( ch=='Y'|| ch == 'y')
     {
        clrscr();
        cout<<" \n Enter the value for new node :";
        cin>>n;
        default:
        cout<<" INVALID SELECTION";
        sleep(1);
        break;
        
     }

     } while( choice! = 5 )  

}

}


    node *cnn( int n  )

{
ptr = new node ;
ptr -> no =n;
ptr ->next =null ;
return ptr ;  
}
