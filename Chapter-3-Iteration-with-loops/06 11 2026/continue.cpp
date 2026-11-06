#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 0;

    while (num < 100){
        num++; //incrementing
        if (num % 2 != 0){ //if number is even then
            continue; // skips to next iteration
        }
        cout << num <<endl;
    }
    return 0;
}