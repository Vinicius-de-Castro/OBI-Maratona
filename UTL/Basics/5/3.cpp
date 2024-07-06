#include <iostream>

using namespace std;

int main(){
    
    char x;
    if (x >= '0' && x <= '9') cout << "IS DIGIT\n";
    else {
        cout << "ALPHA\n";
        if (x >= 'A' && x <= 'Z') cout << "IS CAPITAL\n";
        else cout << "IS SMALL\n";
    }
    return 0;
}