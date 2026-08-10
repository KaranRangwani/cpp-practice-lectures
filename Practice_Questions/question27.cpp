#include<iostream>
using namespace std ; 
int main() { 
float Buy = 750 ; 
float Sell = 900 ; 
cout<<"What will be the profit? "<<endl; 
float Profit = Sell - Buy ; 
cout<<"The profit is : ₹"<<Profit<<endl ; 
cout<<"What will be the profit percent ?"<<endl ; 
float PP = (Profit/Buy) * 100 ; 
cout<<"The profit percent is :"<<PP<<"%"<<endl ; 
return 0 ; 
}