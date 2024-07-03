#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, b;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> b >> str;
        int j = 0, k = b - 1;
        while (j < k){
            swap(str[j], str[k]);
            j++;
            k--;
        }
        cout << str << endl;
    }

    return 0;
}