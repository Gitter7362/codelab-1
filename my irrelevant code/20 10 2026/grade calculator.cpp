#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int grade;
    int givenGrade;

    cout << "enter your full name:" <<endl;
    cin >> name;
    cout << "enter your score out of 100" <<endl;
    cin >> givenGrade;

    grade = givenGrade / 10;

//extension
    // cout << grade <<endl;
    switch (grade){
        case 1:
        case 2:
        case 3:
            cout << name << " achieved: F" <<endl;
            break;
        case 4:
            cout << name << " achieved: E" <<endl;
            break;
        case 5:
            cout << name << " achieved: D" <<endl;
            break;
        case 6:
            cout << name << " achieved: C" <<endl;
            break;
        case 7:
            cout << name << " achieved: B" <<endl;
            break;
        case 8:
        case 9:
        case 10:
            cout << name << " achieved: A" <<endl;
            break;
    }

//core task
    // if (grade <= 39){
    //     cout << name << " achieved: F" <<endl;
    // }else if (grade >= 40 && grade <= 49){
    //       cout << name << " achieved: E" <<endl;  
    // }else if (grade >= 50 && grade <= 59){
    //     cout << name << " achieved: D" <<endl;
    // }else if (grade >= 60 && grade <= 69){
    //     cout << name << " achieved: C" <<endl;
    // }else if (grade >= 70 && grade <= 79){
    //     cout << name << " achieved: B" <<endl;
    // }else if (grade >= 80 && grade <= 100){
    //     cout << name << " achieved: A" <<endl;
    // }else{
    //     cout << "that is not a valid input" <<endl;
    // }
    return 0;
}