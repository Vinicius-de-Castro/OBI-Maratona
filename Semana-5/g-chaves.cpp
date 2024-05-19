#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    string aux;
    stack<char> chaves;

    cin >> n;
    for (int i = 0; i <= n; i++){
        getline(cin, aux);
        for(char c : aux){
            if (c == '{') chaves.push(c);
            else if (c == '}'){
                if (chaves.top() == '{') chaves.pop();
                else chaves.push(c);
            }
        }
    }
    cout << (chaves.empty() ? "S" : "N");

    return 0;
}
