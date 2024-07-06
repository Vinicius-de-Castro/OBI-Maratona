#include <iostream>

using namespace std;

int main(){
    
    int n, a, b, c, d, e, f, g;
    cin >> n >> a >> b >> c >> d >> e >> f >> g;
    cout << ((n-(a+b+c-d-e-f+g)) == 0 ? "N" : "S");

    return 0;
}
