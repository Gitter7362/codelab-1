#include <iostream>
#include <string>
using namespace std;

int main(){
    string title, author; //defining variable without a value
    int year;

    cout << "what is the title of your favourite book? " <<endl; //output message
    cin >> title; //taking input and storing to variable named title    
    cout << "who wrote " <<title << "? " <<endl;
    cin >> author;    
    cout << "when was " << title << " published? " <<endl;
    cin >> year;

    cout << "collected information: " <<endl;
    cout << "name of book - " << title <<endl;
    cout <<"author - " << author <<endl;
    cout <<"year of publish - " << year <<endl; //outputting all the information in a nicer format

    return 0;
}