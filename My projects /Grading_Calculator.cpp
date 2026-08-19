#include<iostream>
using namespace std ; 
int main(){
    float marks ; 
    cout<<"Input the marks out of 100 : "<<endl ; 
    cin>>marks; 
    if (marks >= 90){
        cout<<"GRADE 'A' "<<endl ; 
    }
    else if (marks >= 80){
        cout<<"GRADE 'B' "<<endl ; 
    }
    else if (marks >= 70){
        cout<<"GRADE 'C' "<<endl ; 
    }
    else if (marks >= 60){
        cout<<"GRADE 'D' "<<endl ; 
    }
     if (marks < 60 ){
    cout<<"GRADE 'F' "<<endl ; 
     }
     return 0 ; 
}