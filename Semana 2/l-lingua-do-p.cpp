#include <iostream>

using namespace std;

int main(){
    
    string mensagem;
    getline(cin, mensagem);
    int chars = mensagem.size();
    int impar = 1;
    
    for (int i = 0; i < chars; i++){
        if (i % 2 == impar || mensagem[i] == ' ') cout << mensagem[i];
        if (mensagem[i] == ' '){
            if (impar == 1) impar = 0;
            else impar = 1;
        }
    }
    cout << endl;

    return 0;
}
