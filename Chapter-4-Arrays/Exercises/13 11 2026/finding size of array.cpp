#include <iostream>
#include <string>
using namespace std;

int main(){
    string array[] = {"rob", "hob", "job", "gob", "dob", "lob"};
    //int count = 0;

    for (int count = 0; array[count] != " "; count++){
        cout << count <<endl;
    }

    // while (array[count] != " "){
    //     cout << array[count] <<endl;
    //     count++;
    // }
    //cout << "the array has " << count << " indexes" <<endl;

    return 0;
}