#include <iostream>

using namespace std;

int main(){
    
    int pass;
    cin >> pass;
    while (pass != 1999){
        cout << "Wrong\n";
        cin >> pass;
    }
    cout << "Correct\n";

    return 0;
}