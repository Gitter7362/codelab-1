#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[6] = {"jake", "zac", "ian", "ron", "sam", "dave"};

    for (int i = 0; i < 6; i++){
        if (names[i] == "sam"){
            cout << "sam has been found at index: " << i <<endl;
            break;
        }else{
            cout << "same wasn't found in the list" <<endl;
        }
    }
}