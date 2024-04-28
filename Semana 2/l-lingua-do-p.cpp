#include <iostream>

using namespace std;

int main(){
    
    string mensagem;
    getline(cin, mensagem);
    int chars = mensagem.size();
    
    for (int i = 0; i < chars; i++){
        if (((mensagem[i] != 'p') || 
            ((i > 0) && 
            (i < chars - 1) && 
            ((mensagem[i-1] == 'p') && 
            (mensagem[i+1] == 'p')))) ||
            (mensagem[i-1] == 'p' && mensagem[i] == 'p' && mensagem[i+1] == ' ')
            ) cout << mensagem[i];
    }
    cout << endl;

    return 0;
}
