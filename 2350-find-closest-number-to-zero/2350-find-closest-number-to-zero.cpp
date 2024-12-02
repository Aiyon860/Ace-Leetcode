class Solution {
public:
    int max(int a, int b) {
        return a > b ? a : b;
    }
    int findClosestNumber(vector<int>& nums) {
        int val = nums[0];
        int min_diff = abs(nums[0]);
        for (int i = 1; i < nums.size(); ++i) {
            int x = abs(nums[i]);
            if (x < min_diff) {
                min_diff = x;
                val = nums[i];
            } else if (x == min_diff) {
                val = max(val, nums[i]);
            }
        }
        return val;
    }
};