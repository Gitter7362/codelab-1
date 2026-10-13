#include <iostream>
#include <string>
using namespace std;

int main(){
    float hours;
    double cost = 2.40;
    cout << "how long have you parked for? " <<endl;
    cin >> hours;

    double totalCost = cost * hours;
    cout << "the total cost of your visit is £" << totalCost <<endl;

}