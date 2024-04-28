#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    if (A) {
        if (B) cout << "A" << endl;
        else cout << "B" << endl;
    }
    else cout << "C" << endl;

    return 0;
}
