#include <iostream>

using namespace std;

int main(){
    
    char x;
    cin >> x;
    cout << (char)(x ^ 32) << "\n";   
    return 0;
}