#include <iostream>
#include <map>

using namespace std;

int main(){
    
    map<char, char> cifra;
    string padrao, entrada;

    cin >> padrao >> entrada;

    for (int i = 0; i < 26; i++){
        cifra[padrao[i]] = ('a' + i);
    }

    for (char c : entrada){
        cout << cifra[c];
    }

    cout << endl;

    return 0;
}
