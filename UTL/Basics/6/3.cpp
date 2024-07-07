#include <iostream>

using namespace std;

int main(){
    
    int n, aux, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux > 0) pos++;
        else if (aux < 0) neg++;
        if (aux % 2 == 0) even++;
        else odd++;
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << pos << "\n";
    cout << "Negative: " << neg << "\n";
    return 0;
}