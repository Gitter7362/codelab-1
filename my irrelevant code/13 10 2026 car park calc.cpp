#include <iostream>
#include <string>
using namespace std;

int main(){
    float hours;
    double cost = 2.40;
    char pound = 156; //defining variables
    
    cout << "How long have you parked for? " <<endl;
    cin >> hours; //taking input and storing
    double totalCost = cost * hours; //calculating the total cost of visit
    cout << "The total cost of your visit is " << pound << totalCost <<endl; //ouput message

}