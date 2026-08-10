#include<iostream> 
using namespace std ;
int main() {  
int units ; 
int rate ; 
cout<<"For how many units you want to calculate the electricity bill? "<<endl ; 
cin>>units ; 
cout<<"Whats the rate of per unit ? "<<endl ; 
cin>>rate; 
float total = units*rate ; 
cout<<"The total electricity bill is :₹"<<total<<endl;
float avg = total/units ; 
cout<<"The average cost per unit is : ₹"<<avg<<endl ; 

return 0 ;

}