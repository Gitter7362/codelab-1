#include <iostream>
#include <string>
using namespace std;

int main(){
    int mbs;

    cout << "enter your internet download speed\n1: < 5 mb/s\n2: 5 - 24 mb/s\n3: 25 - 49 mb/s\n4: 50 - 99 mb/s\n5: 100 - 499mb/s\n6: 500 - 999 mb/s\n7: > 1000 mb/s" <<endl;
    cin >> mbs;

    while (cin.fail()) { //input validation from resources
        cout << "Invalid input" << endl;
        cin.clear(); //clear bad input flag
        cin.ignore(8, '\n'); //ignore input
        cin >> mbs; //get number again
    }

    switch(mbs){
        case 1: 
            cout << "this is very slow internet speed" <<endl;
            break;
        case 2:
            cout << "this is basic broadband speed" <<endl;
            break;
        case 3:
            cout << "this is standard broadband speed" <<endl;
            break; 
        case 4:
            cout << "this is fast broadband speed" <<endl;
            break;
        case 5:
            cout << "this is very superfast speed" <<endl;
            break;
        case 6:
            cout << "this is ultrafast speed" <<endl;
            break;
        case 7:
            cout << "this is Gigabit+ speed" <<endl;
            break;

    }

    return 0;
}