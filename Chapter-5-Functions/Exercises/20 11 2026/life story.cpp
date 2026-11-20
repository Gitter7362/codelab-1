#include <iostream>
#include <string>
using namespace std;

void characteristics( string name, int age, string theirLike){ //defining function
    cout << "Hello my name is " << name << ", I am " << age << " years old and like " << theirLike <<endl;
}

int main(){
    characteristics("Yanik", 19, "stuff"); //adding information to use in the function and calling the function

    return 0;
}