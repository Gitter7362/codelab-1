#include <iostream>
#include <string>
using namespace std;

int main(){
    double paces[7];
    double averagePace;

    for (int x = 0; x < 7; x++){
        cout << "enter the pace for day: " << x+1 <<endl;
        cin >> paces[x];
    }
    for (int y = 0; y < 8; y++){
        averagePace = averagePace + paces[y];
    }
    averagePace = averagePace / 7;
    averagePace = averagePace / 60;
    cout << averagePace <<endl;

}