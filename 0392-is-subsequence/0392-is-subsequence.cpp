class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_len = s.length(), t_len = t.length();
        if (s_len == 0) {
            return true;
        }
        for (int i = 0, j = 0; i < s_len && j < t_len; ++j) {
            if (s[i] == t[j]) {
                ++i;
            }
            if (i == s_len) {
                return true;
            }
        }
        return false;
    }
};