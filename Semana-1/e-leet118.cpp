#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> row;
        for (int i = 0; i < numRows; i++){
            if (i == 0) row = {1};

            else if (i == 1) row = {1, 1};

            else for (int j = 0; j <= i; j++) {
                if (j == 0) row.push_back(1);
                else if (j == i) row.push_back(1);
                else row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }

            triangle.push_back(row);
            while (row.size()) row.pop_back();
        }
        return triangle;
    }
};

int main(){

    int n;
    vector<vector<int>> tri;
    Solution sol;
    cin >> n;
    tri = sol.generate(n);
    for (vector v : tri){
        for (int i : v){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;

}