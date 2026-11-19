#include <iostream>
#include <string>
using namespace std;

int main(){
    int mbs;

    cout << "enter your internet download speed\n1: < 5\n2: 5 - 24\n3: 25 - 49\n4: 50 - 99\n5: 100 - 499\n6: 500 - 999\n7: > 1000" <<endl;
    cin >> mbs;

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
            cout << "this is very slow internet speed" <<endl;
            break;
        case 6:
            cout << "this is very slow internet speed" <<endl;
            break;
        case 7:
            cout << "this is very slow internet speed" <<endl;
            break;

    }

    return 0;
}