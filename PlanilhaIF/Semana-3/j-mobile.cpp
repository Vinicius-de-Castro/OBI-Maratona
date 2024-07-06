#include <iostream>

using namespace std;

int main(){
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a == (b + c + d)) &&
        (d == (b + c)) && 
        (b == c)) cout << "S";
    else cout << "N";

    return 0;
}
