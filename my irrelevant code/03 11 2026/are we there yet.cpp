#include <iostream>
using namespace std;

int main(){
    char ans;

    do{
        cout << "are we there yet? Y/N" <<endl;
        cin >> ans;
    }while (ans != 'Y' || ans != 'y');
    cout << "hooray" <<endl;

    return 0;
}