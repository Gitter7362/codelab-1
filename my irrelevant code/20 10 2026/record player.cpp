#include <iostream>
#include <string>
using namespace std;

int main(){
    int userChoice;
    cout << "1: for metallica\n2: for queen \n3: for bombay bicycle club\n4: for ABBA" <<endl;
    cin >> userChoice;

    switch(userChoice){
        case 1:
            cout << "you chose metallica";
            break;
        case 2:
            cout << "you chose queen";
            break;
        case 3:
            cout << "you chose bombay bicycle club";
            break;
        case 4:
            cout << "you chose ABBA";
            break;
        default:
            cout << "not a valid input";
            break;
    }
    return 0;
}