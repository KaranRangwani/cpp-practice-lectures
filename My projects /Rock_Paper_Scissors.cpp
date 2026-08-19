#include<iostream>
using namespace std ; 
int main(){
    string choice ; 
    string computer ; 
    cout<<"Pick one of the above: Rock / Paper / Scissors !!"<<endl ; 
    cin>>choice ; 
    if (choice == "Rock"){
         computer = "Scissors" ; 
    }
    else if (choice == "Paper"){
         computer = "Rock" ;    
    }
    else if (choice == "Scissors"){
        computer = "Scissors" ; 
    }
    if (choice == computer){
        cout<<"The round was a draw -_- "<<endl ; 
    }
    else if (choice == "Rock" && computer == "Scissors"){
        cout<<"You win :)"<<endl ; 
    }
    else if (choice == "Paper" && computer == "Scissors"){
        cout<<"You lose , BUT I WIN :)) "<<endl ; 
    }
    else if (choice == "Paper" && computer == "Rock"){
        cout<<"Fuh man , I lost again"<<endl ; 
    }
    else if (choice == "Rock" && computer == "Paper"){
        cout<<"YEAH I WIN AGAINNNNNN!"<<endl ; 
    }
    else if (choice == "Paper" && computer == "Rock"){
        cout<<"Well playedd , down for next round?"<<endl ; 
    }
    if (choice !="Paper" && choice != "Rock" && choice != "Scissors"){
        cout<<"Invalid choice gang!!!!"<<endl ; 
    }
    return 0 ; 

}