class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0, f_len = str1.length(), s_len = str2.length();
        if (f_len < s_len) {
            return false;
        }
        while (i < f_len && j < s_len) {
            char next = (str1[i] + 1 > 'z' ? 'a' : str1[i] + 1);
            if (str1[i] == str2[j] || next == str2[j]) {
                ++i;
                ++j;
            } else {
                ++i;
            }
        }
        return j == s_len;
    }
};