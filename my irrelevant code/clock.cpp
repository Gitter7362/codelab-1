#include <iostream>
#include <string>
using namespace std;

int main(){
    double time;

    cout << "enter the time (in format 00.00) " <<endl;
    cin time;

    if (time < 12.00){
        cout << "good morning" <<endl;
    }else if (12.00 <= time < 18.00){
        cout << "good afternoon" <<endl;
    }else if (18.00 <= time < 21.00){
        cout << "good evening" <<endl;
    }else if (21.00 <= time < 24.00){
        cout << "good night" <<endl;
    }
    
    return 0;
}