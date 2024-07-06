#include <iostream>

using namespace std;

int main(){
    
    int arvores, prod, alvo, dias  = 0;
    cin >> arvores >> prod >> alvo;

    while (arvores < alvo){
        dias++;
        arvores += (arvores * prod);
    }
    cout << dias;

    return 0;
}
