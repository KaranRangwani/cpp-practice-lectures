#include<iostream> 
using namespace std ; 
int main () { 
    int a = 4 ; 
    int b = 6  ; 
    // Arithmetic operators in C++
    cout <<" the value of a + b is "<< a + b << endl ; 
    cout <<" the value of a - b is "<< a - b << endl ; 
    cout <<" the value of a * b is "<< a * b << endl ; 
    cout <<" the value of a / b is "<< a / b << endl ; 
    cout <<" the value of a % b is "<< a % b << endl ; 
    cout <<" the value of a++ is "<< a++ << endl ; 
    cout <<"The vaue of a after a++ is "<<a<<endl ; 
    cout <<" the value of a-- is "<< a-- << endl ;
    cout <<"The vaue of a after a-- is "<<a<<endl ;
    cout <<" the value of ++a is "<< ++a << endl ; 
    cout<<"The value of a after ++a is "<<a<<endl ; 
    cout <<" the value of --a is "<< --a << endl ; 
    cout<<"The value of a after --a is "<<a<<endl ; 
    cout<<endl ; 
    cout<<endl ; 
    //Comparison operators in C++
    cout<<"The value of a==b is "<<(a==b)<<endl  ; 
    cout<<"The value of a!=b is "<<(a!=b)<<endl  ; 
    cout<<"The value of a>=b is "<<(a>=b)<<endl  ; 
    cout<<"The value of a<=b is "<<(a<=b)<<endl  ; 
    cout<<"The value of a<b is "<<(a<b)<<endl  ; 
    cout<<"The value of a>b is "<<(a>b)<<endl  ; 
    // Now if the following commands are true then it will print "1"
    //Or if the follwoing command is false it will print "0"


    //Logical && (and)operators
    //->Agar dono false toh false
    // ->agar ek ture , ek false toh false
    // ->agar dono true toh true
    cout<<"The operations of Logical operators"<<endl  ; 
    cout<<"The value to logical && operator is "<< ((a<b) && (a>b))<<endl ; 
    cout<<endl ; 
    cout<<endl ; 

    //Logical || (or) operators
    cout<<"The operations of logical || operators  "<<endl ; 
    cout<<"The value of logical || operator is "<<((a>b) || (a<b))<<endl ; 
    cout<<endl ; 
    //Logical ! (not) operators
    cout<<"The operations of logical ! operatoe "<<endl ; 
    cout<<"The value of logical ! operator 1 is  "<<!(a==b)<<endl ; 
    cout<<"The value of logical ! operator 2 is "<<!(a<b)<<endl ; 
    

    
    


    
    return 0 ; 
}

