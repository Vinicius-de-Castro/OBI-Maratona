#include <iostream>

using namespace std;

int main(){
    
    int ia, ib, fa, fb;
    cin >> ia >> ib >> fa >> fb;
    if (ia != fa) cout << "1";
    else cout << ((ib == fb) ? "0" : "2");

    return 0;
}
