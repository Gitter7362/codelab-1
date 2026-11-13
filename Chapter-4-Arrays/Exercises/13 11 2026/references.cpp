#include <iostream>
#include <string>
using namespace std;

int main(){
    string top3Bands[3]; //array to store 3 bands
    cout << "enter your top 3 bands" <<endl; //request user input

    for (string& band : top3Bands){ //iterate array accessing elements by reference
        cin >> band; //get input into element
    }
    for (string band : top3Bands){ //iterate array
        cout << band <<endl; //output each element
    }
    return 0;
}