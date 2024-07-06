#include <iostream>

using namespace std;

int main(){

    float x;
    cin >> x;
    cout << "Interval ";
    if (x >= 0 && x <= 25) cout << "[0, 25]\n";    
    else if (x > 25 && x <= 50) cout << "(25, 50]\n";
    else if (x > 50 && x <= 75) cout << "(50, 75]\n";
    else if (x > 75 && x <= 100) cout << "(75, 100]\n";
    else cout << "Out of Intervals\n";
    return 0;
}