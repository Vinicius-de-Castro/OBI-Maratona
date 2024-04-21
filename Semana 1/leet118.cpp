#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> row;
        for (int i = 1; i <= numRows; i++){
            if (i = 1) row.push_back(1);
            else if (i = 2) for (int j = 0; j < 2; j++) row.push_back(1);
            else for (int j = 0; j < i - 1; j++) row.push_back(triangle[i - 1][j] + triangle[i - 1][j+1]);
            triangle.push_back(row);
            while (triangle.size()) triangle.pop_back();
        }
        return triangle;
    }
};

int main(){

    int numRows;
    vector<vector<int>> triangle;
    Solution sol;
    cin >> numRows;
    triangle = sol.generate(numRows);
    for (vector v : triangle){
        for (int i : v){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;

}