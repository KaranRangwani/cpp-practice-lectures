#include<iostream> 
using namespace std ; 
int main() {
    float  basic_salary ; 
    float bonus ; 

cout<<"Whats the basic salary (₹)"; 
cin>> basic_salary ; 
cout<<"Whats the bonus (₹)"; 
cin>>bonus ; 
float total_salary = basic_salary + bonus ; 
cout<<"The total salary is: ₹"<<total_salary<<endl; 
float bonus_percentage = (bonus /basic_salary)*100 ; 
cout<<"The bonus percentage is: "<<bonus_percentage<<"%"<<endl ; 
return 0 ; 
}