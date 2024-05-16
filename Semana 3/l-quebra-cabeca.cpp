#include <iostream>
#include <map>
using namespace std;

int main(){
  int n, e, d;
  char c;
  cin >> n;
  map<int, pair<char, int>> mapa;
  while (n--){
    cin >> e >> c >> d;
    mapa[e] = {c, d};
  }
  for (auto x = mapa.find(0); x != mapa.end(); x = mapa.find(x->second.second)){
    cout << x->second.first;
  }
  cout << endl;
  return 0;
}
