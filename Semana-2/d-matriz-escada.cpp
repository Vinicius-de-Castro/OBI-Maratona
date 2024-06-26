#include <iostream>

using namespace std;

int main(){

    bool escada = true;
    int matriz[500][500];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }

    int start = 0;
    for (int i = 0; i < n; i++){
        if (!escada) break;
        int j = 0;
        while (matriz[i][j] == 0 && j < m) j++;
        if (j == (m - 1) && i < (n - 1) && matriz[i][j] == 0){
            for (int a = (i + 1); a < n; a++){
                if (!escada) break;
                for (int b = 0; b < m; b++){
                    if (matriz[a][b] != 0) {
                        escada = false;
                        break;
                    }
                }
            }
        }
        else {
            for (int k = i + 1; k < n; k++){
                if (matriz[k][j] != 0) {
                    escada = false;
                    break;
                }
            }
        }
    }

    cout << (escada ? "S" : "N") << endl;

    return 0;
}
