#include <iostream>
#include <string>
using namespace std;

int viewMenu(int choice){ //displaying menu to user
    cout << "1: earn points\n2: redeem points\n3: view points balance\n4: exit" <<endl;
    cin >> choice; //choice from the user 
    return choice;
}

int earnPoints(int balance){
    balance += 1; //starting reward points

}

int redeemPoints(){

}

void displayPoints(){

}

void exit(){

}

int main(){
    int choose;

    viewMenu(choose); //calling function so that choice can be used in the switch case statement

    switch(choose){
        case 1:
            break;
        case 2:
            break;
        case 3: 
            break;
        case 4:
            break;
    }

    return 0;
}