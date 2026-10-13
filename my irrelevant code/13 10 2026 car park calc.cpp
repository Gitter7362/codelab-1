#include <iostream>
#include <string>
using namespace std;

int main(){
    float hours;
    double cost = 2.40;
    char pound = 156;
    cout << "How long have you parked for? " <<endl;
    cin >> hours;

    double totalCost = cost * hours;
    cout << "The total cost of your visit is " << pound << totalCost <<endl;

}