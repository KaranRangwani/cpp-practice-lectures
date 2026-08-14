//**************float,doubles and long doubbles literals************** 
#include<iostream> 
using namespace std ; 
int main() {
//float d = 34.4f;
//long double f = 34.55l ;
//cout<<"The value of d is "<<d<<endl<<"The value of f is "<<f ; 

//return 0 ; 

//**************Reference variales**************
//Rohan --> Monty --> Rahu --> Dangerous Coder 
/*float x =55 ; 
float & y = x ; 
cout<< x<<endl ; 
cout<< y<<endl; */
//**************Typecasting variales**************
int a = 45 ; 
float b = 56.77 ; 
cout<<"The value a is "<<(float)a <<endl; 
cout<<"The value of b is "<<(int)b<<endl ; 
// examples
cout<<"The value is "<<a + (int)b<<endl ; 
cout<<"The value is "<<a + b<<endl ; 
cout<<"The value is "<<(float)a + (int)b<<endl ; 
//so basically typecasting is used to convert functions like float to int and many more etc'
}