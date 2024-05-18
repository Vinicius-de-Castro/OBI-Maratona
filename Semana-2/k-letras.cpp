#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char carac;
    string texto;
    vector<string> palavras;
    int comCarac = 0;

    cin >> carac;
    getline(cin, texto);

    int len = texto.size();
    string aux;

    for (int i = 0; i < len; i++){
        if (texto[i] == ' '){
            palavras.push_back(aux);
            aux = "";
        }
        else aux += texto[i];
    }
    
    for (string s : palavras){
        for (char c : s){
            if (c == carac){
                comCarac++;
                break;
            }
        }
    }

    cout << setprecision(2) << ((float)(carac/len)*100.0);

    return 0;
}
