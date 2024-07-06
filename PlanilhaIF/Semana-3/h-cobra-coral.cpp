#include <iostream>

using namespace std;

int main(){

    int padrao[4];
    cin >> padrao[0] >> padrao[1] >> padrao[2] >> padrao[3];
    cout << ((padrao[0] == padrao[3]) ? "F" : "V") << endl;

    return 0;
}
