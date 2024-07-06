#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, b, pastas = 0, atual;
    cin >> n >> b;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    cout << "\n";

    int i = 0;
    while (i < n){
        atual = 0;
        while (atual < b){
            atual += v[i]; 
            if (atual > b) break; 
            i++;
        }
        cout << "breakpoint: " << i << endl;
        pastas++;
    }

    cout << pastas;

    return 0;
}