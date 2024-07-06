#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m, x, y;
    bool existe = false;
    cin >> n >> m;

    int voos[n][n] = {0};

    for (int i = 0; i < m; i++){
        cin >> x >> y;
        x--;
        y--;
        voos[x][y] = 1;
    }

    for (int i = 0; i < n; i++){
        int j;
        for (j = 0; j < n; j++){
            if (i == j) continue;
            if (voos[i][j] == 0) break;
        }
        if (j == n) existe = true;
    }

    cout << (existe ? "S" : "N");

    return 0;
}