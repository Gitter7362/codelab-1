#include <iostream>
using namespace std;

int main(){
    double myNum = 20;
    int count = 0;

    while (myNum >= 0){
        cout << myNum <<endl;
        count = count + 1;
        myNum = myNum - 0.5;
    }
    cout << count <<endl;

    return 0;
}
