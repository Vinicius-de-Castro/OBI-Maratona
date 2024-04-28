#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool teste(vector<int> v, int n) {
    if (v[n+2] < (v[n+1] + v[n])) return true;
    return false;
}

int main(){
    
    vector<int> lados;
    int input;
    
    for (int i = 0; i < 4; i++){
        cin >> input;
        lados.push_back(input);
    }
    sort(lados.begin(), lados.end());
    
    if (teste(lados, 0) || teste(lados, 1)) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
