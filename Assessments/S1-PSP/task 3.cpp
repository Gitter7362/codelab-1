#include <iostream>
#include <string>
using namespace std;

int viewMenu(int choice){ //displaying menu to user
    cout << "1: earn points\n2: redeem points\n3: view points balance\n4: exit" <<endl;
    cin >> choice; //choice from the user 
    int choose = choice;
    return choose; //returning value
}

int earnPoints(int balance){
    balance = 0;
    int updatedBalance = balance + 1; //starting reward points
    return updatedBalance;
}

int redeemPoints(){

}

void displayPoints(){

}

void exit(){

}

int main(){
    int choose;

    while (viewMenu(choose) != 4){
                    //calling function so that choice can be used in the switch case statement
        switch(viewMenu(choose)){ // wouldnt work calling the function outside the switch case statement
            case 1:
                int userBalance;
                earnPoints(userBalance);
                cout<<"me"<<endl;
                break;
            case 2:
                cout<<"you"<<endl;
                redeemPoints();
                //cout << "stuff" <<endl;
                break;
            case 3: 
                cout<<"nsakjsd"<<endl;
                displayPoints();
                break;
            case 4:
                break;
        }
    }

    return 0;
}