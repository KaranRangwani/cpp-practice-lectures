#include <iostream>
int glo = 7 ;
void sum (){
    int a ; 
    std::cout<<glo ; 
    // jab local variable 89 tha tho vo print ho rha tha 
    //jab globaal saath me aaya toh global ki value toh gayab hui nahi toh 
    // voh dono saath me print ho gye , toh voh bane 789
    // jab int glo ke aage glo se ek aur variable likhte ha toh int main waala ( locL variable change hota hai)
  }
int main(){
    sum () ; 
    // global and local variable me se local jeet ta hai , agar local function ke andar ho!!

    int glo = 89; 
    glo = 77 ; 
    glo = 12 ; 

bool is_true = true ;  
    


    
    // int a = 6 , b = 7 ;
    // int sum = (a+b) ;
    float pi = 3.44 ; 
    char f = 'r' ; 
    std::cout<<glo<<is_true ; 


    return 0 ;
}