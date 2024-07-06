#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, s;
    bool existe = false;
    cin >> n >> s;

    int disparos[n], psum[n] = {0};

    for (int i = 0; i < n; i++){
        cin >> disparos[i];
    }
    psum[0] = disparos[0];
    for (int i = 1; i < n; i++){
        psum[i] = psum[i-1] + disparos[i];
    }

    int i = 0, j = 0;

    while (i < n && j < n){
        if (i > j) j++;
        if (psum[j] - psum[i] == s) {
            existe = true;
            break;
        }
        else if (psum[j] - psum[i] > s) i++;
        else j++;
    }

    cout << (existe ? "S" : "N");

    return 0;
}