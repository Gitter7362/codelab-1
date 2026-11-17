#include <iostream>
using namespace std;
//global variables for calculations
int num1, num2, total;
 
 
//declare functions here
// int add(){
//     total = num1 + num2;
//     return 0;
// }
// int sub(){
//     total = num1 - num2;
//     return 0;
// }
// int Div(){
//     total = num1 / num2;
//     return 0;
// }
// int mult(){
//     total = num1 * num2;
//     return 0;
// }

int num1(){
    cout << "Welcome to the calculator" << endl;
    cout << "---------------------" << endl;
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    
    cin >> num1;

    return num1;
}
int num2(){
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;

    cin >> num2;

    return num2;
}  

int choice(){
    cout << "What calculation do you want to perform" << endl;
    cout << "1: Addition \n2: Subtraction\n3: Division\n4: Multiplication" << endl;
    
    int choice;
    cin >> choice;

    return 0;
}

int main() {

    num1();
    num2();
    choice();

    if(choice == 1){
        total = num1 + num2;
    }else if(choice == 2){
        total = num1 - num2;
    }else if(choice == 3){
        total = num1 / num2;
    }else if(choice == 4){
        total = num1 * num2;
    }
    
    cout << "Result" << endl;
    cout << "---------------------" << endl;
    cout << total << endl;
 
 
    return 0;
}
 
 
//define functions here