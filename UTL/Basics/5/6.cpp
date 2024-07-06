#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    double n;
    cin >> n;
    if (n == (int)(n)) cout << "int " << (int)(n);
    else cout << "float " << (int)(n) << " " << n - floor(n) << "\n";
    return 0;
}