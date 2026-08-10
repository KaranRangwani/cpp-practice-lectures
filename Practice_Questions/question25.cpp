#include<iostream> 
using namespace std ; 
int main() { 
int money = 5000 ; 
int spent = 1750 ;  
int remain = money - spent ; 
cout<<"The remaining money is : ₹"<<remain<<endl ;
cout<<endl ; 
int percent = spent*100/money ; 
cout<<"The percentage spent is : "<<percent<<"%"<<endl ;
}