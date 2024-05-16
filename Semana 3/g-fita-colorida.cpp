#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int fita[n], passosE, passosD, j, k;

    for (int i = 0; i < n; i++) cin >> fita[i];

    for (int i = 0; i < n; i++){
        if (fita[i] == -1){
            passosE = 0;
            j = i;
            passosD = 0;
            k = i;
            while (j >= 0){
                if (fita[j] == 0) break;
                j--;
                passosE++;
            }
            if (j == -1) passosE = 10001;
            while (k < n){
                if (fita[k] == 0) break;
                k++;
                passosD++;
            }
            if (k == n) passosD = 10001;
            fita[i] = min(min(passosD, passosE), 9);
        }
    }

    cout << fita[0];
    for (int i = 1; i < n; i++) cout << " " << fita[i];
    return 0;
}
