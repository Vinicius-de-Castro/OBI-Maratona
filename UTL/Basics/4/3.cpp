#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(9);
    double r, pi = 3.141592653;
    cin >> r;
    cout << pi * r * r;
    
    return 0;
}