#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int grade;

    cout << "enter your full name:" <<endl;
    cin >> name;
    cout << "enter your score out of 100" <<endl;
    cin >> grade;

    if (grade <= 39){
        cout << name << " achieved: F" <<endl;
    }else if (grade >= 40 && grade <= 49){
          cout << name << " achieved: E" <<endl;  
    }else if (grade >= 50 && grade <= 59){
        cout << name << " achieved: D" <<endl;
    }else if (grade >= 60 && grade <= 69){
        cout << name << " achieved: C" <<endl;
    }else if (grade >= 70 && grade <= 79){
        cout << name << " achieved: B" <<endl;
    }else if (grade >= 80 && grade <= 100){
        cout << name << " achieved: A" <<endl;
    }else{
        cout << "that is not a valid input" <<endl;
    }

}