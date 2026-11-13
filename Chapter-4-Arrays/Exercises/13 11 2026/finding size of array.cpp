#include <iostream>
#include <string>
using namespace std;

int main(){
    int array[] = {1,5,6,7,8,3,4,5,3,5,7,5,4,4,5,6,5};
    //string array[] = {"rob", "hob", "job", "gob", "dob", "lob"};
    //int count = 0;

    cout << sizeof(array) / sizeof(array[0]) <<endl;

    // for (int count = 0; array[count] != " "; count++){
    //     cout << count <<endl;
    // }

    // while (array[count] != " "){
    //     cout << array[count] <<endl;
    //     count++;
    // }
    //cout << "the array has " << count << " indexes" <<endl;

    return 0;
}