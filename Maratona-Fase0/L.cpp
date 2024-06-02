#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    queue<string> quartos, chatos;
    string aux;
 
    for (int i = 0; i < n; i++){
        cin >> aux;
        quartos.push(aux);
    }
    for (int i = 0; i < n; i++){
        cin >> aux;
        chatos.push(aux);
    }

    for (int i = 0; i < n; i++){
        if (!quartos.empty()){
            if (i > 0) cout << " "; 
            cout << chatos.front();
            if (chatos.front() == quartos.front()) 
                chatos.pop();
            quartos.pop();
        }
    }
    cout << "\n";

    return 0;
}