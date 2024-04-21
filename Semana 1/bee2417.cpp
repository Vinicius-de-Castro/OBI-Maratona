#include <iostream>
 
using namespace std;
 
int main() {
 
    int pc = 0, pf = 0, aux, sc = 0, sf = 0;

    cin >> aux;
    pc += aux * 3;
    cin >> aux;
    pc += aux;
    cin >> sc;

    cin >> aux;
    pf += aux * 3;
    cin >> aux;
    pf += aux;
    cin >> sf;

    if (pc > pf) cout << "C" << endl;
    else if (pc < pf) cout << "F" << endl;
    else {
        if (sc > sf) cout << "C" << endl;
        else if (sc < sf) cout << "F" << endl;
        else cout << "=" << endl;
    }
 
    return 0;
}