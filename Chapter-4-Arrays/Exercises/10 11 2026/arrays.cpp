#include <iostream>
#include <string>
using namespace std;

int main(){
    //string months[12];

    string months[] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", ""};

    cout << "enter 12th month" <<endl;
    cin >> months[11];

    for (int i = 0; i < 12; i++ ){
        cout << i+1 << ": " ;
        cout << months[i] <<endl;
    }
    return 0;
}