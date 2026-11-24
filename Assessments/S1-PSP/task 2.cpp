#include <iostream>
#include <string> //always include these libraries incase thy are needed
using namespace std;

int main(){
    double paces[7];//creating array for all pace times
    double fastestTime = 1000;//setting as very high so no matter the first pace, a new value will be set by the for function this variable is used in
    int count = 0; //how many times jess got a pace below 7 mins 30 secs
    double totalSecs = 0;
    int averagePaceMins = 0;
    double averagePaceSecs = 0;

    for (int x = 0; x < 7; x++){ //for loop the length of the array
        cout << "enter the pace in seconds for day : " << x+1 <<endl; //asking for the pace of each day
        cin >> paces[x]; //storing inputs into the array
    }
    for (int y = 0; y < 7; y++){ //for loop the length of the array
        totalSecs += paces[y]; //adding all values of array together
        if (paces[y] < 450){ //if statement for counting how man times jess was under 7 mins 30 secs
            count = count + 1;
        }
        if (fastestTime > paces[y]){ //including all in a loop this is for getting the fastest pace
            fastestTime = paces[y];
        }
    }
    averagePaceSecs = totalSecs;
    averagePaceMins = averagePaceSecs / 60 / 7; 
//getting the minutes, as its an integer it truncates the 
//decimal and all i need is the minutes and dont need the decimal  

    averagePaceSecs = (averagePaceSecs / 60 / 7) - averagePaceMins; //getting the seconds
    averagePaceSecs = averagePaceSecs * 60; //a way too complicated way of getting minutes and seconds

    cout << "jess was under 7 mins and 30 secs " << count  << " times" <<endl;
    cout << "jess' fastest pace for the week was: " << fastestTime <<endl;
    cout << "jess' average pace was: " << averagePaceMins << " minutes and " << averagePaceSecs << " seconds" <<endl; //an output to see things are working

    return 0;
}