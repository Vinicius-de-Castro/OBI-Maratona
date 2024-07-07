#include <iostream>

using namespace std;

int gcd(int a, int b){
    int ans = min(a, b);
    while ((a % ans != 0 || b % ans != 0) && ans > 1) ans--;
    return ans;
}

int main(){
    
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n";    
    return 0;
}