#include<iostream>
using namespace std ; 
int main() {
int salary ; 
float HRA = 20 ; 
float DA = 10 ; 
float bonus = 5 ; 
cout<<"What the basic salary in Rs."<<endl ; 
cin>>salary ; 
float hra = salary*20/100 ; 
float da = salary*10 ; 
float bonus_salary = salary*5/100 ; 
float total = salary + hra + da + bonus_salary ; 
cout<<"Final salary is Rs."<<total<<endl ; 
return 0 ; 

}