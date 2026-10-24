// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string ans;

//     cout << "what is the capital of france? " <<endl;
//     cin >> ans;

//     if (ans == "paris"){
//         cout << "correct" <<endl;
//     }else{
//         cout << "incorrect" <<endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main(){
    double moneyGot;
    double moneyLeft;
    double moneyNeeded;

    cout << "how much money you got? " <<endl;
    cin >> moneyGot;

    if (moneyGot >= 25){
        moneyLeft = moneyGot - 25;
        cout << "you have " << moneyLeft << " remaining" <<endl;
    }else{
        moneyNeeded = 25 - moneyGot;
        cout << "i need to save " << moneyNeeded <<endl;
    }
    return 0;
}