#include <iostream>
#include <string>
using namespace std;

int main(){
    int day;
    cout << "enter a number between 1 and 7:" <<endl;
    cin >> day;

    switch (day){
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "Saturday";
            break;
        case 3:
            cout << "Friday";
            break;
        case 4:
            cout << "tuesday";
            break;
        case 5:
            cout << "thursday";
            break;
        case 6:
            cout << "Sunday";
            break;
        case 7:
            cout << "wednesday";
            break;
    }

}