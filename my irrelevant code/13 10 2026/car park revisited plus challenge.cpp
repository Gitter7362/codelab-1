#include <iostream>
#include <string>
using namespace std;

int main(){
    double befCost = 2.40;
    double aftCost =1.00;
    double timeArrived;
    double timeLeft;
    float hoursParked;
    char pound = 165;
    double totalCost;

    cout << "what time did you arrive? (in format 00.00)" <<endl;
    cin >> timeArrived;
    cout << "what time did you leave?" <<endl;
    cin >> timeLeft;
    hoursParked = timeLeft - timeArrived;

    if (timeArrived >= 18.00){
        totalCost = aftCost * hoursParked;
    }else if (timeArrived - ){
        totalCost = befCost * hoursParked;        
    }
    cout << "the total cost of you visit is: " << pound << totalCost <<endl;

    return 0;
}