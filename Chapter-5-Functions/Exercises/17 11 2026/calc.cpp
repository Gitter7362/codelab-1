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

void welcome(){

    cout << "Welcome to the calculator" << endl;
    cout << "---------------------" << endl;
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    
  
}
void enterNum(){
    cin >> num1;
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;

    cin >> num2;

}  

void choice(){

    cout << "What calculation do you want to perform" << endl;
    cout << "1: Addition \n2: Subtraction\n3: Division\n4: Multiplication" << endl;
    
    int choice;
    cin >> choice;

}

double calc(){
    if(choice == 1){
        total = num1 + num2;
    }else if(choice == 2){
        total = num1 - num2;
    }else if(choice == 3){
        total = num1 / num2;
    }else if(choice == 4){
        total = num1 * num2;
    }
    return total;
}

void result(){
    cout << "Result" << endl;
    cout << "---------------------" << endl;
    cout << total << endl;
}

int main(){
    // int num1;
    // int num2;

    welcome();
    enterNum();
    choice();
    calc();
    result();    

    return 0;
}
 
 
//define functions here