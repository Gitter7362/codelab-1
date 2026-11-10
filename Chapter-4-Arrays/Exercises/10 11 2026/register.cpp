#include <iostream>
#include <string>
using namespace std;

int main(){
    string reg[5];

    for (int i = 0; i < 5; i++){
        cout << "enter the " << i+1 << " person in your class" <<endl;
        cin >> reg[i];
    }
    for (int x = 0; x < 5; x++){
        cout << x+1 << ": " << reg[x] <<endl;
    }
    return 0;
}