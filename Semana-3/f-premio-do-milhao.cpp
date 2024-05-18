#include <iostream>

using namespace std;

int main(){

    int n, x, dias = 1, total = 0;
    cin >> n;
    while (n--){
        cin >> x;
        total += x;
        if (total < 1000000) dias++;
    }
    cout << dias << endl;

    return 0;
}
