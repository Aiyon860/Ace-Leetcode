class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> n;
        for (int i = 0; i < nums.size(); ++i) {
            if (n.find(nums[i]) != n.end()) {
              return true;
            } else {
              n.insert(nums[i]);
            }
        }
        return false;
    }
};