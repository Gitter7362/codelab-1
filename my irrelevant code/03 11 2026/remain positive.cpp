#include <iostream>
using namespace std;

int main(){
    double myNum = 20;
    int count;

    while (myNum >= 0){
        cout << myNum <<endl;
        count ++;
        myNum = myNum - 0.5;
    }
    cout << count <<endl;
    
    return 0;
}
