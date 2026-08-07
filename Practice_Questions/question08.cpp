#include<iostream>
using namespace std ; 
int main() { 
    float radius ;
    float pi ;
    cout<<"Enter radius of the circle (in cm) : \n" ; 

    cin>>radius ;
    float area = pi*radius*radius ;  
    cout<<"The area of circle is "<<area<<" cm \n" ;
    float diameter = 2*radius ; 
    cout<<"The diameter of circle is "<<diameter<<" cm \n" ; 
    float circumference = 2*pi*radius ; 
    cout<<"The circumference of circle is "<<circumference<<" cm" ; 
    return 0 ; 

}