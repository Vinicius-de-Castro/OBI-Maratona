#include <iostream>

using namespace std;

int main(){
    
    char s;
    int n, aux;
    cin >> s >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        for (int j = 0; j < aux; j++) cout << s;
        cout << "\n";
    }    
    return 0;
}