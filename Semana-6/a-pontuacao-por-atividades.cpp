#include <iostream>

using namespace std;

int main(){
    int e, a, c, total;
    cin >> e >> a >> c;

    total = (2 * e) + (3 * a) + (c * 5);

    switch (total)
    {
    case 100 ... 149: cout << "B"; break;
    case 150 ... 199: cout << "S"; break;
    case 200 ... 1000: cout << "O"; break;
    default: cout << "N\n"; break;
    }

    return 0;
}
