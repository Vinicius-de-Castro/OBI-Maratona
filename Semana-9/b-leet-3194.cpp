class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        double avg = INT_MAX;
        for (int i = 0; i < n/2; i++){
            if ((double)(nums[i]+nums[n-i-1])/2 < avg)
                avg = (double)(nums[i]+nums[n-i-1])/2;
        }
        return avg;
    }
};