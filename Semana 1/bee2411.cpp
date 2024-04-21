#include <iostream>
 
using namespace std;
 
int main() {
 
    int x = 4, y = 3, n, move, steps = 0;

    cin >> n;
    while (n--){
        cin >> move;
        steps++;
        switch (move){
            case 1:
                x += 1;
                y += 2;
                break;
            case 2:
                x += 2;
                y += 1;
                break;
            case 3:
                x += 2;
                y -= 1;
                break;
            case 4:
                x += 1;
                y -= 2;
                break;
            case 5:
                x -= 1;
                y -= 2;
                break;
            case 6:
                x -= 2;
                y -= 1;
                break;
            case 7:
                x -= 2;
                y += 1;
                break;
            case 8:
                x -= 1;
                y += 2;
                break;
        }
        if ((x == 1 && y == 3) || (x == 2 && y == 3) || (x == 2 && y == 5) || (x == 5 && y == 4)) break;
    }
 
    cout << steps << endl;

    return 0;
}