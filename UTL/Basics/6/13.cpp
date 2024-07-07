#include <iostream>

using namespace std;

int main(){
    
    int n, m, start, end;
    cin >> n >> m;
    while (n > 0 && m > 0){
        start = min(n, m), end = max(n, m);
        int sum = 0;
        for (int i = start; i <= end; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << "\n";
        cin >> n >> m;
    }
    return 0;
}