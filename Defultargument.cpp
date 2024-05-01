# include <iostream>
using namespace std ;
int moneyRecevied( int currentmoney , int factor=1.4)
{
    return currentmoney * factor ;
}
double moneyRecevied( int currentmoney, double borrowmoney)
{
    return currentmoney+borrowmoney ;
    cout<<" your answer "<<endl;
}
int main()
{
     int money =1000;
        cout<<" If you have"<<money<<" Rs in your bank account you will recive"<<moneyRecevied(money, 6.7)<<"Rs after 1 year";
    moneyRecevied(money,9.0);

       return 0 ;
}