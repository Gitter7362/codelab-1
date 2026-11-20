#include <iostream>
#include <string>
using namespace std;

double numbers(double num12, double num21){
    

    double multi = num12 * num21;
    return multi;
}

double operation(double num1, double num2){
    cout << "enter 2 random numbers" <<endl;
    cin >> num1;
    cin >> num2;

    return num1, num2;
}

int main(){
    //double num1;
    //double num2;
    double number1;
    double number2;

    operation(number1, number2);

    double multiplied = numbers(number1, number2);

    cout << multiplied << endl;

    return 0;
}