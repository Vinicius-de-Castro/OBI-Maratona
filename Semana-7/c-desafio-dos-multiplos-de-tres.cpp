#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int dezenas = 1, x, y = 0;
    vector<int> digitos;

    cin >> x;
    if (x%3 != 0) cout << "-1";
    else {
        while (x){
            digitos.push_back(x%10);
            x /= 10;
            dezenas*= 10;
        }
        sort(digitos.begin(), digitos.end());
        while(digitos.size()){
            dezenas /= 10;
            y += digitos.back() * dezenas;
            digitos.pop_back();
        }
        cout << y;
    }

    return 0;
}