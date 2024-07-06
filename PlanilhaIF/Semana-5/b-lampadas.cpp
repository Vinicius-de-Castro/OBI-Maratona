#include <iostream>

using namespace std;

int main(){

    int n, input;
    bool a = false, b = false;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> input;
        a = !a;
        if (input == 2) b = !b;
    }

    cout << (a ? "1" : "0") << endl << (b ? "1" : "0");

    return 0;
}
