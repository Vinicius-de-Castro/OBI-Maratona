#include <iostream>

using namespace std;

void sum(int x, int y){
    cout << x + y << "\n";
}

int main(){
    
    int x, y;
    cin >> x >> y;
    sum(x, y);
    return 0;
}