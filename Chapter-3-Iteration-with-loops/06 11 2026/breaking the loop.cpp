#include <iostream>
#include <string>
using namespace std;

int main(){
    int attempts = 0;
    string pin;

    while (attempts < 3){ //loop limited to 3 attempts
        cout << "Enter PIN" <<endl;
        cin >> pin;

        if (pin == "1234"){ //checking if PIN is correct
            cout << "Access granted." <<endl;
            break; //stop loop if access granted
        }
        attempts++; //inrement attempts
    }
    cout << "Welcome to the Banking Area" <<endl;
    
    return 0;
}
