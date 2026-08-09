#include<iostream>
using namespace std ; 
int main() { 
    int price = 800 ; 
    int discount =  15;  
    cout<<"What will be final price after the discount is applied? "<<endl ; 
    cout<<endl ; 
    float discounted  = price * discount/100 ; 
    cout<<"The discounted price is :₹"<<discounted<<endl ; 
    cout<<endl ; 
    int final = ( price - discounted ) ; 
    cout<<"The final price after the 15% discounte is : ₹"<<final<<endl ; 
    return 0 ; 
} 
