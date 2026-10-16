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
    cin >> day2;

    if (time1 >=10 && (day1 == "friday" || day1 == "Friday") && (time2 >= 2 && (day2 == "tuesday" || day2 == "Tuesday"))){
        cout << "time for codelab" <<endl;
    }else{
        cout << "not time for codelab" <<endl;
    }

    return 0;
}