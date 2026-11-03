#include <iostream>
#include <string>
using namespace std;

int main(){
    int time1;
    int time2;
    string day1;
    string day2;

    cout << "time?" <<endl;
    cin >> time1;
    cout << "time another time" <<endl;
    cin >> time2;

    cout << "today?" <<endl;
    cin >> day1;
    cout << "next codelab sesh?" <<endl;
    cin >> day2; //input and output

    if (time1 >=10 && (day1 == "friday" || day1 == "Friday") && (time2 >= 2 && (day2 == "tuesday" || day2 == "Tuesday"))){ 
//time1 and time2 must be right and day1 and day2 have to be right
        cout << "time for codelab" <<endl; //output
    }else{
        cout << "not time for codelab" <<endl;
    }

    return 0;
}