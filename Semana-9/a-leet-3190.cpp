class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for (int i : nums) if (i%3) count++;
        return count;
    }
};