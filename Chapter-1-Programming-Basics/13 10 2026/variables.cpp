#include <iostream>
#include <string>
using namespace std;


int main(){
    int num1 = 4;
    double dec = 3.32;
    char car = 'c';
    bool boolean = true;
    bool inpbool;
    string str = "string";
    string str2 =  " string a ling";
    string inpstr = "";


    // if ((cin >> inpbool) == false) {
    //  cout << "it is " << boolean <<endl;
    // } else {
    //  cout << "it is " << boolean <<endl;
    // }
    cout << "true or false?" <<endl;
    cin >> inpbool;
    if (inpbool == boolean) {
      cout << boolean <<endl;
    } else{
      cout << "you were wrong" <<endl;
    }

    cin >> inpstr;
    cout << "number " <<  num1 << endl;
    cout << str.append(str2) << endl;
    cout << inpstr <<endl; 

    return 0;
}
