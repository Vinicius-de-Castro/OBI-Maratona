#include <iostream>

using namespace std;

int main(){
    
    int saldo, input, min = 1001, n;
    cin >> n >> saldo;
    while (n--){
        cin >> input;
        saldo += input;
        if (saldo < min) min = saldo;
    }
    cout << min;

    return 0;
}
