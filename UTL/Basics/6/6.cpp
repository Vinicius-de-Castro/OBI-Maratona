#include <iostream>

using namespace std;

int main(){
    
    bool isPrime = true;
    int n;
    cin >> n;
    if (n == 1) isPrime = false;
    else {
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    cout << (isPrime ? "YES" : "NO") << "\n";
    return 0;
}