#include <iostream>

using namespace std;

int floor(int a, int b){
    return a/b;
}

int ceil(int a, int b){
    return a % b == 0 ? a/b : a/b+1;
}

int round(int a, int b){
    return (10 * a / b) % 10 >= 5 ? a/b+1 : a/b;
}

int main(){
    
    int a, b;
    cin >> a >> b;
    cout << "floor " << a << " / "  << b << " = " << floor(a, b) << "\n";
    cout << "ceil " << a << " / "  << b << " = " << ceil(a, b) << "\n";
    cout << "round " << a << " / "  << b << " = " << round(a, b) << "\n";
    return 0;
}