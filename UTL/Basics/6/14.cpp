#include <iostream>

using namespace std;

int main(){
    
    int n, x, y, sum;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        int start = min(x, y), end = max(x, y);
        sum = 0;
        for (int j = start + 1; j < end; j++){
            if (j % 2 == 1) sum += j;
        }
        cout << sum << "\n";
    }    
    return 0;
}