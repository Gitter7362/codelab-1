#include <iostream>
#include <string>
using namespace std;

int main(){
    bool milk = false;
    bool sugar = false;
    int choice1;
    int choice2;


    cout << "would you like milk in the tea? 1: yes, 2: no" <<endl;
    cin >> choice1;
    cout << "any sugar? 3: yes 4: no" <<endl;
    cin >> choice2;

    switch (choice1, choice2){
    case1:
        milk = true;
        break;
    case2:
    case3:
        sugar = true;
        break;
    }
    

    return 0;
}