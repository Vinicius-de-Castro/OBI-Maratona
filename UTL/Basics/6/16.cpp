#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int spaces = n - 1, stars = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < spaces; j++) cout << " ";
        spaces--;
        for (int j = 0; j < stars; j++) cout << "*";
        stars+=2;
        cout << "\n";
    }
    for (int i = 0; i < n; i++){
        spaces++;
        for (int j = 0; j < spaces; j++) cout << " ";
        stars-=2;
        for (int j = 0; j < stars; j++) cout << "*";
        cout << "\n";
    }
    return 0;
}