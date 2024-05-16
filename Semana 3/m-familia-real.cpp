#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<int> fami(n), foram(m);
    map<int, int> graus, foramGraus;

    for (int i = 0; i < n; i++) cin >> fami[i];
    for (int i = 0; i < m; i++) cin >> foram[i];

    for(int i = 0; i < n; i++){

        //Encontra o grau da pessoa i
        int grau = 0;
        int j = i;
        while(fami[j] != 0){
            grau++;
            j = fami[j];
        }

        ++graus[grau];
    }

    return 0;
}
