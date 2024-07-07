#include <iostream>

using namespace std;

int main(){
    
    int t, n;
    long long int fac;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        fac = 1;
        if (n != 0 && n != 1){
            for (int j = 1; j <= n; j++){
                fac *= j;
            }
        }
        cout << fac << "\n";
    }    
    return 0;
}