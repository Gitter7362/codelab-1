#include <iostream>
#include <string> //always include these libraries incase thy are needed
using namespace std;

int main(){
    double paces[7];//creating array for all pace times
    double averagePace = 0; 
    double fastestTime = 1000;//setting as very high so no matter the first pace, a new value will be set by the for function this variable is used in
    int count = 0; //how many times jess got a pace below 7 mins 30 secs
    double totalSecs = 0;
    int averagePaceMins = 0;
    int averagePaceSecs = 0;

    for (int x = 0; x < 7; x++){ //for loop the length of the array
        cout << "enter the pace in seconds for day : " << x+1 <<endl; //asking for the pace of each day
        cin >> paces[x]; //storing inputs into the array
    }
    for (int y = 0; y < 7; y++){ //for loop the length of the array
        totalSecs += paces[y]; //adding all values of array together
        if (paces[y] < 450){
            count = count + 1;
        }
        if (fastestTime > paces[y]){
            fastestTime = paces[y];
        }
    }
    averagePace = totalSecs / 60; //calculating average of the whole weeks pace in seconds

    averagePace = averagePace / 7; //converting from seconds to minutes

    cout << "jess was under 7 mins and 30 secs " << count  << " times" <<endl;
    cout << "jess' fastest pace for the week was: " << fastestTime <<endl;
    //cout << "jess' average pace was: " << averagePaceMins << "minutes and " << averagePaceSecs << " seconds" <<endl; //an output to see things are working

    return 0;
}