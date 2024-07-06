#include <bits\stdc++.h>

using namespace std;

int main(){

    int n, l, satis = 0;
    cin >> n >> l;
    vector<int> filhos(n);

    for (int i = 0; i < n; i++) cin >> filhos[i];
    sort(filhos.begin(), filhos.end());

    for (int i = n - 1; i >= 0; i--){
        if (l < 100 - filhos[i]) break;
        l -= 100 - filhos[i];
        satis++;
    }
    cout << satis;

    return 0;
}