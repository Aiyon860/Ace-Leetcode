class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int f_len = word1.length();
        int s_len = word2.length();
        int i = max(f_len, s_len);
        int j = min(f_len, s_len);
        int idx = 0;
        while (idx < j) {
            res = res + word1[idx] + word2[idx];
            ++idx; 
            --i;
        }
        if (j == f_len) {
            while (i--) {
                res += word2[idx];
                ++idx;
            }
        } else {
            while (i--) {
                res += word1[idx];
                ++idx;
            }
        }
        return res;
    }
};