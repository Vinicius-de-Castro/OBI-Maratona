#include <iostream>
 
using namespace std;
 
int main() {
 
    int temp, maior = 0;
    while (temp != 0){
        cin >> temp;
        if (temp > maior) maior = temp;
    }
    cout << temp << endl;
 
    return 0;
}