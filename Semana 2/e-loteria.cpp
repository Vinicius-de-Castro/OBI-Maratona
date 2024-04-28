#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool busca(vector<int> vec, int x, int inicio, int fim){
    if (inicio > fim) return false;
    else {
        int meio = (inicio + fim)/2;
        if (vec[meio] == x) return true;
        else if (vec[meio] > x) return busca(vec, x, inicio, meio - 1);
        else return busca(vec, x, meio + 1, fim);
    }
}

int main(){
    vector<int> apostas, sorteados;
    int input, acertos = 0;
    for (int i = 0; i < 6; i++) {
        cin >> input;
        apostas.push_back(input);
    }
    for (int i = 0; i < 6; i++) {
        cin >> input;
        sorteados.push_back(input);
    }
    sort(apostas.begin(), apostas.end());
    sort(sorteados.begin(), sorteados.end());

    for (int c : apostas)
        if (busca(sorteados, c, 0, 5)) acertos++;
    
    if (acertos < 3) cout << "azar" << endl;
    else if (acertos == 3) cout << "terno" << endl;
    else if (acertos == 4) cout << "quadra" << endl;
    else if (acertos == 5) cout << "quina" << endl;
    else cout << "sena" << endl;

    return 0;
}
