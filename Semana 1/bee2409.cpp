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
 
    int a, b, c, h, l, aux;
    cin >> a >> b >> c >> h >> l;

    sort(a, b);
    sort(b, c);
    sort(a, b);
    sort(h, l);
    
    if ((a <= h) && (b <= l)) cout << "S" << endl;
    else cout << "N" << endl;
 
    return 0;
}