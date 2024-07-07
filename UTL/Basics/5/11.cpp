#include <iostream>

using namespace std;

int main(){
    
    int a, b, c, ans;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+') ans = a + b;
    else if (s == '-') ans = a - b;
    else ans = a * b;

    if (ans == c) cout << "Yes\n";
    else cout << ans << "\n";
    return 0;
}