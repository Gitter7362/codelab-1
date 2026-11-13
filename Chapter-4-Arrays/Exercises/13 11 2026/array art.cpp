#include <iostream>
#include <string>
using namespace std;

int main(){
    char art[1][5] = {
        {'-', '-', '-', '-', '-'},
        {'-', '0', '-', '0', '-'},
        {'-', '-', '@', '-', '-'},
        {'-', '^', '^', '^', '-'},
        {'-', 'V', 'V', 'V', '-'}
    };
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++){
            cout << art[row][col] <<endl;
        }
    }
    return 0;
}