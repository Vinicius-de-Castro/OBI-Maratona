#include <iostream>

using namespace std;

int main(){
    
    int a, b, c;
    cin >> a >> b >> c;
    int minimum = min(a, min(b, c)), maximum = max(a, max(b, c));
    cout << minimum << "\n" << (a + b + c - minimum - maximum) << "\n" << maximum << "\n\n";
    cout << a << "\n" << b << "\n" << c << "\n";
    return 0;
}