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
        for (int j = start; j < m; j++){
            if (matriz[i][j] == 0) continue;
            else {
                for (int k = i; k < n; k++){
                    if (matriz[k][j] != 0) {
                        escada = false;
                        break;
                    }
                    else if ((k = n - 1) && matriz[k][j] == 0) {
                        start++;
                        break;
                    }
                }
            }
        }
    }

    cout << (escada ? "S" : "N") << endl;

    return 0;
}
