#include <iostream>

using namespace std;

int main(){
    
    int t, n, two, ans;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        two = 1;
        ans = 0;
        while (n > 0){
            if (n%2 == 1){
                ans += two;
                two *= 2;
            }
            n /= 2;
        }
        cout << ans << "\n";
    }

    return 0;
}