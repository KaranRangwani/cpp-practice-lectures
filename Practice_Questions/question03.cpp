#include<iostream>
using namespace std;
int main() {
    int a = 10 , b = 20 ; 
    int sum = a+b ; 
    int difference = a-b ; 
    int multiplication = a*b ; 

    cout<<"+---------------------------+" ; 
    cout<<"\n|     SIMPLE CALCULATOR     |" ; 
     cout<<"\n+---------------------------+\n"  ;
     cout<<"|"<<a<<" + "<<b<<" "   ; 
     cout<<" ""=   " <<sum<< "            |"  ; 
       cout<<"\n|"<<a<<" - "<<b<<" "   ; 
     cout<<"=   "<<difference<<"            |" ; 
      cout<<"\n|"<<a<<" * "<<b<<" "   ; 
     cout<<"=   "<<multiplication<<"            |" ; 
    cout<<"\n+---------------------------+\n"  ;
     return 0 ;     
}