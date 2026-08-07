#include<iostream>
using namespace std ; 
int  main() {
    int l ; 
    int b ; 
    cout<<"Enter the length of rectangle (in cm ) : \n " ; 
    cin>>l ; 
    cout<<"Enter the breadth of rectangle (in cm ) : \n" ; 
    cin>>b ; 
    int area = l*b ; 
    int perimeter = 2*(l+b) ; 

    cout<<"The area of rectangle is :"<<area<<"  \n" ;
    cout<<"The perimeter of rectangle is : "<<perimeter<<" cm " ; 
    return 0 ; 
    
    }