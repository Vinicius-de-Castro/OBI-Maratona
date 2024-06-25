class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int minX = INT_MAX, minY = INT_MAX, maxX = 0, maxY = 0;
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (grid[i][j] == 1){
                    minX = min(minX,i);
                    maxX = max(maxX,i);
                    minY = min(minY,j);
                    maxY = max(maxY,j);
                }
            }
        }
        return ((maxX - minX + 1) * (maxY - minY + 1));
    }
};