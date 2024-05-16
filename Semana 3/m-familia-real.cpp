#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<int> fami(n + 1), foram(m);
    map<int, int> graus, foramGraus;

    for (int i = 1; i <= n; i++) cin >> fami[i];
    for (int i = 0; i < m; i++) cin >> foram[i];
    sort(foram.begin(), foram.end());

    for(int i = 1; i <= n; i++){

        //Encontra o grau da pessoa i
        int grau = 0;
        int j = i;
        while(fami[j] != 0){
            grau++;
            j = fami[j];
        }
        ++graus[grau];
        if(binary_search(foram.begin(), foram.end(), i)){
            ++foramGraus[grau];
        }
    }
    
    cout << setprecision(2) << fixed;

    for (auto x : graus){
        cout << (((double)foramGraus[x.first]/x.second)*100.0) << " ";
    }
    
    return 0;
}
