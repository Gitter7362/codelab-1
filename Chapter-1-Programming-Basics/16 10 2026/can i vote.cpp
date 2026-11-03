#include <iostream>
#include <string>
using namespace std;

int main(){
    int age; //defining age

    cout << "enter your age" <<endl;
    cin >> age; //output message and input

    if (age >= 18){
        cout << "you can vote" <<endl;
    }else if (age < 18){
        cout << "you can't vote" <<endl;
    }else{
        cout << "incorrect input" <<endl; //if else statement
    }

    return 0; //always return 0
}