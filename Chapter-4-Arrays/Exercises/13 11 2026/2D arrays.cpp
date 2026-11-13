#include <iostream>
#include <string>
using namespace std;

int main(){
    string teamList[3][4] = {
        {"newcastle", "man united", "arsenal", "chelsea"},
        {"real madrid", "barcelona", "athletico", "deoprtivo"},
        {"juventus", "roma", "inter", "napoli"}
    };

    for (int row; row < 3; row++){
        for (int column; column < 4; column++){
            cout << teamList[row][column] << " " <<endl;
        }
    }
    return 0;
}