#include <bits/stdc++.h>

using namespace std;

int main(){

    int aux, sum = 0;

    for (int i = 0; i < 3; i++) {
        cin >> aux;
        sum += aux;
    }

    cout << (6 - sum) << endl;

    return 0;
}