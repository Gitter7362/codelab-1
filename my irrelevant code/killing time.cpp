#include <iostream>
#include <string>
using namespace std;

int main(){
    int minsLate; //int as might as well round up
    double money; //double cause money gets up to 2 decimals

    cout << "how late is your friend going to be?" <<endl;
    cin >> minsLate;
    cout << "how much money you got?" <<endl;
    cin >> money; //inputs and outputs

    if (minsLate > 15){
        if (money >= 3){ //nested if statement as the task depends on how late the friend will be
            cout << "go for a coffee to kill some time" <<endl;
        }else{
            cout << "go for a walk to kill some time" <<endl;
        }
    }else{
        cout << "sit in park and wait" <<endl; //friend is on tiime
    }
//extension task underneath
    if (minsLate > 15 && money >= 3){
        cout << "go buy a coffee to kill time" <<endl;
    }else if (minsLate > 15 && money < 3){
        cout << "gor for a walk" <<endl;
    }else{
        cout << "sit in park for friend" <<endl;
    }

    return 0;
}