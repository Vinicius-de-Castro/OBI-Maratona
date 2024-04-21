#include <iostream>
 
using namespace std;
 
int main() {
 
    int temp = 1, maior = 0;
    while (temp != 0){
        cin >> temp;
        if (temp > maior) maior = temp;
    }
    cout << maior << endl;
 
    return 0;
}