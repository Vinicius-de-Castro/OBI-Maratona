#include <iostream>

using namespace std;

int main(){

    int bolas[65];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> bolas[i];
    
    while (n--){
        for (int i = 0; i < n; i++){
            if (bolas[i] == bolas[i+1])
                bolas[i] = 1;
            else 
                bolas[i] = -1;
        }
    }
    if (bolas[0] == 1) cout << "preta" << endl;
    else cout << "branca" << endl;
    return 0;
}
