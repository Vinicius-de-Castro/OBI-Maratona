#include <iostream>

using namespace std;

int main(){

    int p, d1, d2;
    cin >> p >> d1 >> d2;
    cout << (((d1 + d2) % 2 == p) ? "0" : "1");

    return 0;
}
