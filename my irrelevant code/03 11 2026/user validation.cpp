#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;

    cout << "enter a number: " <<endl;
    cin >> x;

    while (cin.fail()){ //check if user enters a valid input
        cout << "invalid input" <<endl; //output error message
        cin.clear(); //clear bad input flag
        cin.ignore(1000, '\n'); //ignore input
        cin >> x; //get number again
    }
    cout << "your number: " << x <<endl;

    return 0;
}