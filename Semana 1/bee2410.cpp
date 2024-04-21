#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
 
    int n, max = 0, temp, pres = 1;
    vector<int> nums;
    vector<int> alunos;
    cin >> n;

    while (n--) {
        cin >> temp;
        nums.push_back(temp);
        if (temp > max) max = temp;
    }

    while(max--) alunos.push_back(0);
    
    for (int i : nums) alunos[i] = 1;
    for (int i : alunos) if (i) pres++;

    cout << pres << endl;
 
    return 0;
}