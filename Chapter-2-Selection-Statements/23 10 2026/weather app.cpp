#include <iostream>
using namespace std;

int main(){
    double temp;
    cout << "temperature?" <<endl;
    cin >> temp;

    if (temp < 0){
        cout << "freezing" <<endl;
    }else if (0 <= temp && temp < 20){
        cout << "bit chilly" <<endl;
    }else if (temp > 19){
        cout << "its warming up" <<endl;
    }
    return 0;
}