#include <iostream>
#include <string> //always include these libraries incase thy are needed
using namespace std;

int main(){
    double paces[7];//creating array for all pace times
    double averagePace; 
    int count; //how many times jess got a pace below 7 mins 30 secs

    for (int x = 0; x < 7; x++){ //for loop the length of the array
        cout << "enter the pace in seconds for day : " << x+1 <<endl; //asking for the pace of each day
        cin >> paces[x]; //storing inputs into the array
    }
    for (int y = 0; y < 7; y++){ //for loop the length of the array
        averagePace = averagePace + paces[y]; //adding all values of array together
    }
    averagePace = averagePace / 7; //calculating average of the whole weeks pace in seconds
    averagePace = averagePace / 60; //converting from seconds to minutes

    for (int z = 0; z < 7; z++){
        if (paces[z] <= 450){
            count++;
        }
    }
    cout << count <<endl;

    cout << averagePace <<endl; //placeholder just as an output to see things are working

    return 0;
}