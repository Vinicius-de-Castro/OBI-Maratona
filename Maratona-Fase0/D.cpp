#include <bits/stdc++.h>

using namespace std;

int main(){
    int e, v, hrs, mins;

    cin >> e >> v;

    hrs = 19 + (e / v);
    hrs %= 24; 

    e %= v;
    e *= 60;

    mins = (e / v);

    if (hrs < 10) cout << "0";
    cout << hrs << ":";
    if (mins < 10) cout << "0";
    cout << mins << endl;

    return 0;
}