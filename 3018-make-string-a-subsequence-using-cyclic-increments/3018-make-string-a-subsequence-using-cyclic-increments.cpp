class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int f_len = str1.size(), s_len = str2.size();
        if (f_len < s_len) {
            return false;
        }
        for (int i = 0, j = 0; i < f_len; ++i) {
            char next = (str1[i] == 'z' ? 'a' : str1[i] + 1);
            if (str1[i] == str2[j] || next == str2[j]) {
                ++j;
            }
            if (j == s_len) {
                return true;
            }
        }
        return false;
    }
};