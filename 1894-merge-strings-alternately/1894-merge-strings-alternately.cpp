class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int f_len = word1.length();
        int s_len = word2.length();
        int i = 0;
        for (int i = 0; i < f_len || i < s_len; ++i) {
            if (i < f_len) {
                res += word1[i];
            }
            if (i < s_len) {
                res += word2[i];
            }
        }
        return res;
    }
};