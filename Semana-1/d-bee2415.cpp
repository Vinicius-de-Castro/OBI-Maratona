#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, input, current, currentStreak = 0, maxStreak = 0;

    cin >> n;
    while (n--){
        cin >> input;
        if (input == current) currentStreak++;
        else {
            currentStreak = 1;
            current = input;
        }
        if (currentStreak > maxStreak) maxStreak = currentStreak;
    }

    cout << maxStreak << endl;
 
    return 0;
}