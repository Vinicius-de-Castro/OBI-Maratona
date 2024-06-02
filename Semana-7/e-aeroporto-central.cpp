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
        voos[i][i] = 1;
    }

    for (int i = 0; i < n; i++){
        if (voos[i][0] == 1){
            int j = 1;
            while (j < n && !existe){
                if (voos[i][j] == 0) 
                    break;         
                if (j = n-1 && voos[i][j] == 1) 
                    existe = true;
                j++;
            }
        }
    }

    cout << (existe ? "S" : "N");

    return 0;
}