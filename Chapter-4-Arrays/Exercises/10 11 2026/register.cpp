#include <iostream>
#include <string>
using namespace std;

int main(){
    // int ppl;
    
    // cout << "how many people are in your class?" <<endl;
    // cin >> ppl;

    string reg[5];

    for (int i = 0; i < 5; i++){
        cout << "enter the " << i+1 << " person in your class" <<endl;
        cin >> reg[i];
    }
    for (int x = 0; x < 5; x++){
        cout << reg[x] <<endl;
    }
    return 0;
}