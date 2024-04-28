#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool bsr(vector<int> &vec, int x, int start, int end){
    if (start > end) return false;
    int mid = (start+end)/2;
    if (vec[mid] == x) return true;
    else if (vec[mid] > x) bsr(vec, x, mid+1, end);
    else bsr(vec, x, start, mid-1);
    
}

int main() {

    int n, m, id;
    vector<int> tickets, gaveUp;

    cin >> n;
    tickets.resize(n);
    for (int i = 0; i < n; i++){
        cin >> id;
        tickets.push_back(id);
    }
    cin >> m;
    gaveUp.resize(n);
    for (int i = 0; i < m; i++){
        cin >> id;
        gaveUp.push_back(id);
    }
    sort(gaveUp.begin(), gaveUp.end());
    
    int firstOut = 0;
    for (int i : tickets){
        if (!bsr(gaveUp, i, 0, (gaveUp.size() - 1))){
            if (firstOut++ > 0) cout << " ";
            cout << i;
        }
    }
    cout << endl;

    return 0;
}