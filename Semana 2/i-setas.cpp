#include <iostream>
#include <set>

using namespace std;

int main(){
    
    set<pair<int, int>> coordsP;
    int x, y, n;
    char mov;

    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            x = 0;
            y = 0;
            cin >> mov;

            if (mov == '>') 
                x = 1;
            else if (mov == 'V') 
                y = -1;
            else if (mov == '<') 
                x = -1;
            else
                y = 1;

            if ((i+x == -1) || (i+x == n) ||
                (j+y == -1) || (j+y == n) ||
                (coordsP.find({i+x, j+y}) != coordsP.end()))
                coordsP.insert(make_pair(i, j));
        }

    }
    cout << (n*n) - coordsP.size() << endl;;

    //Todas as perigosas só pra testar
    for (pair<int, int> p : coordsP){
        cout << "X = " << p.first << " Y = " << p.second << endl;
    }

    return 0;
}
