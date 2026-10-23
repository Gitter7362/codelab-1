#include <iostream>
#include <string>
using namespace std;

int main(){
    bool milk = false;
    bool sugar = false;
    int choice1;
    int choice2;
    string altMilk;
    string sugarType;


    cout << "would you like milk in the tea? 1: yes, 2: no" <<endl;
    cin >> choice1;
    cout << "any sugar? 3: yes 4: no" <<endl;
    cin >> choice2;

    switch (choice1, choice2){
    case1:
        bool milk = true;
        break;
    case2:
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