#include <iostream>
#include <string>
using namespace std;

double numbers(double num12, double num21){
    

    double multi = num12 * num21;
    return multi;
}
int main(){
    double num1;
    double num2;

    cout << "enter 2 random numbers" <<endl;
    cin >> num1;
    cin >> num2;

    double multiplied = numbers(num1, num2);

    cout << multiplied << endl;

    return 0;
}