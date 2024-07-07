#include <iostream>

using namespace std;

int main(){
    
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        if (n == 0) cout << "0\n";
        else{
            while (n > 0){
                cout << (n % 10) << " ";
                n /= 10;  
            }
            cout << "\n";
        }
    }
    return 0;
}