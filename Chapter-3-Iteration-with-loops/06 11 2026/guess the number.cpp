#include <iostream>
#include <random>
#include<string>
using namespace std;

int main(){
    int guess;
    int num = 3;
    int rand;

   

    while (rand != num){
        //cout << "Enter a number between 1 and 10. Enter 0 to quit guessing" <<endl;
        //cin >> guess;
        random_device rd; // Create a random device to seed the generator
        mt19937 gen(rd()); // Use Mersenne Twister engine
        uniform_int_distribution<> dist(1, 10); // Define a distribution: uniform integers between 1 and 100
    
        int rand = dist(gen);//store random number

        cout << rand <<endl;
        //continue;
        //if (rand == 0){
        //    break;
        //}
    }
    cout << "complete" <<endl;
    
    return 0;
}