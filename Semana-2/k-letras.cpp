#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char carac;
    string texto;
    vector<string> palavras;
    int comCarac = 0;

    cin >> carac;
    getline(cin, texto);

    int len = texto.length();
    string aux;

    for (char c : texto){
        if (c == ' '){
            palavras.push_back(aux);
            aux = "";
        }
        else aux.push_back(c);
    }
    
    float tamanho = palavras.size();
    for (string s : palavras){
        cout << s << endl;
        for (char c : s){
            if (c == carac){
                comCarac++;
                break;
            }
        }
    }

    float porcentagem = ((float)comCarac/(float)tamanho) * 100.0;

    cout << setprecision(2) << porcentagem;

    return 0;
}
