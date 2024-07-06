#include <iostream>
 
using namespace std;

void sort(int &n, int &m){
    int aux;
    if (n > m){
        aux = n;
        n = m;
        m = aux;
    }
}
 
int main() {
 
    int a, b, c, aux;
    cin >> a >> b >> c;
    sort(a, b);
    sort(b, c);
    sort(a, b);

    cout << b << endl;

    return 0;
}