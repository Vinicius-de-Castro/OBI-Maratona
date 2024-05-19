#include <bits/stdc++.h>

using namespace std;

int main(){
    
    set<int> estoque;
    int n, input, tacos = 0;

    cin >> n;

    while (n--){
        cin >> input;
        if (estoque.find(input) == estoque.end()){
            tacos += 2;
            estoque.insert(input);
        }
        else estoque.erase(input);
    }

    cout << tacos;
    
    return 0;
}
