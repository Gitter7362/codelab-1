#include <iostream>
#include <string>
using namespace std;

int main(){
    bool milk = false;
    bool sugar = false;
    int choice1;
    string altMilk;
    string sugarType;


    cout << "1: with sugar and milk\n2: milk no sugar\n3: no milk sugar\n4: no milk no sugar" <<endl;
    cin >> choice1;

    switch (choice1){
    case1:
        bool milk = true;
        bool sugar = true;
        break;
    case2:
        bool milk = true;
        break;
    case3:
        bool sugar = true;
        break;
    }

    if (milk == true){
        cout << "what kind of milk would you like?" <<endl;
        cin >> altMilk;
    }
    if (sugar == true){
        cout << "what type of sugar would you like to use?" <<endl;
        cin >> sugarType;
    }

    if (milk == true && sugar == true){
        cout << "your tea will include " << altMilk << " milk and " << sugarType << "sugar" <<endl;
    }else if (milk == true && sugar == false){
        cout << "your tea will include " << altMilk << "milk" <<endl;
    }else if (milk == false && sugar == true){
        cout << "your tea will include " << sugarType << " sugar" <<endl;
    }else{
        cout << "you will have a black tea" <<endl;
    }

    return 0;
}