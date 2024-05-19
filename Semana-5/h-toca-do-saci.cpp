    #include <bits/stdc++.h>

    using namespace std;

    int passosTotais = 0, n, m;

    void busca(int x, int y, vector<vector<int>> mapa, int passos){
        if (passosTotais || mapa[x][y] == 0) 
            return;

        passos++;

        if (mapa[x][y] == 3) {
            passosTotais =  passos;
            return;
        }
        
        mapa[x][y] = 0;

        if (passosTotais == 0){
            if ((x - 1) >= 0) 
                busca((x - 1), y, mapa, passos);
            if ((y - 1) >= 0) 
                busca(x, (y - 1), mapa, passos);
            if ((x + 1) < n) 
                busca((x + 1), y, mapa, passos);
            if ((y + 1) < m) 
                busca(x, (y + 1), mapa, passos);
            }
    }

    int main(){
        
        int x, y, aux;
        cin >> n >> m;
        vector<vector<int>> mapa(n, vector<int>(m));

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> aux;
                if (aux == 2){
                    x = i;
                    y = j;
                }
                mapa[i][j] = aux;
            }
        }
        busca(x, y, mapa, 0);
        cout << passosTotais;

        return 0;
    }