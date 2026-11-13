#include <iostream>
#include <string>
using namespace std;

int main(){
    string vehicles[] = {"car", "train", "tractor", "skiff", "tank"};

    cout << vehicles[3] <<endl;
    cout << vehicles[0] <<endl;

    cout << vehicles[2] << " " << vehicles[4] <<endl;
    cout << vehicles[0] << " " << vehicles[3] << " " << vehicles[1] <<endl;

    for (int i = 0; i < 5; i++){
        cout << vehicles[i] <<endl;
    }
    for (string vehName : vehicles){
        cout << vehName <<endl;
    }

    return 0;
}