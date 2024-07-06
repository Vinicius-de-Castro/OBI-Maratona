#include <iostream>

using namespace std;

int main(){
    
    int a, b;
    char sign;
    cin >> a >> sign >> b;
    bool right = true;
    if (sign == '<' && a >= b) right = false;
    else if (sign == '=' && a != b) right = false;
    else if (sign == '>' && a <= b) right = false;
    cout << (right ? "Right" : "Wrong") << "\n";
    return 0;
}