#include<iostream> 
 using namespace std ; 
 int main() {
    int tuition_fee = 190000 ; 
    int hostel_fee = 170000 ; 
    int scholarship = 30 ; 
    int total = tuition_fee + hostel_fee ; 
    float scholarship_amount = total*scholarship/100 ; 
    int fees_after_scholarship = total-scholarship_amount ; 
    cout<<"The total fees is ₹:"<<total<<endl ; 
    cout<<"The scholarship amount is ₹:"<<scholarship_amount<<endl ; 
    cout<<"The final fee to pay is ₹"<<fees_after_scholarship<<endl ; 
    return 0 ; 

 }