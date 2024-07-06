#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> papel;
    int f, r, aux, dias = 0, gotas;
    bool espalhou;

    cin >> f >> r;

    papel.resize(f, 0);

    gotas = r;

    while (r--){
        cin >> aux;
        papel[aux-1] = 1;
    }

    while (gotas < f){
        for (int i : papel) cout << i;
        cout << endl;
        if (papel[0] == 1 && papel[1] == 0 && f > 1){
            papel[1] = 1;
            gotas++;
        }
        if (papel[f-1] == 1 && papel[f-2] == 0 && f > 1){
            papel[1] = 1;
            gotas++;
        }
        for (int i = 1; i < (f - 1); i++){
            espalhou =  false;
            if (papel[i] == 1 && papel[i-1] == 0){
                papel[i-1] = 1;
                gotas++;
            }
            if (papel[i] == 1 && papel[i+1] == 0){
                papel[i+1] = 1;
                gotas++;
                espalhou = true;
            }
            if (espalhou) i++;
        }
        dias++;
    }

    cout << dias << endl;

    return 0;
}
