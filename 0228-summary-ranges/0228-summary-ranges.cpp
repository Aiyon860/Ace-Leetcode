class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        string t;
        int n = nums.size(), idx = 0, init_pos = 0;
        if (n == 0) {
            return res;
        }
        t += to_string(nums[0]);
        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                ++idx;
            } else {
                if (idx != init_pos) {
                    t += "->" + to_string(nums[idx]);
                }
                ++idx;
                res.push_back(t);
                t = to_string(nums[i]);
                init_pos = i;
            }
        }
        if (idx != init_pos) {
            t += "->" + to_string(nums[idx]);
        }
        if (t != "") {
            res.push_back(t);
        }
        return res;
    }
};