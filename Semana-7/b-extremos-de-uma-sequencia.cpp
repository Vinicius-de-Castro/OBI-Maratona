#include <iostream>

using namespace std;

int main(){

    int input, min = 101, max = 0;
    for (int i = 0; i < 4; i++){
        cin >> input;
        if (input > max) max = input;
        if (input < min) min = input;
    }

    cout << min + max;
    return 0;
}