#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    string aux;
    stack<char> chaves;

    cin >> n;
    while(n--){
        cin >> aux;
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
