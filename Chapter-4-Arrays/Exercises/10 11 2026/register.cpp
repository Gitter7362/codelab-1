#include <iostream>
#include <string>
using namespace std;

int main(){
    int ppl;
    string register[ppl] = {};

    cout << "how many people are in your class?" <<endl;
    cin >> ppl;

    for (int i = 0; i < ppl; i++){
        cout << "enter the " << i+1 << " person in your class" <<endl;
        cin >> register[i];
    }
    cout << register <<endl;

    return 0;
}