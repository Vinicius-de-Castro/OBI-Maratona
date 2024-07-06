#include <iostream>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    cout << ((a % b == 0 || b % a == 0) ? "Multiples\n" : "No Multiples\n");
    
    return 0;
}