class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.length(), m = spaces.size(), len = n + m, i = 0, j = 0, idx = 0;
        string res(len, ' ');
        while (idx < len) {
            if (i < m && j == spaces[i]) {
                ++i;
                ++idx;
            } else {
                res[idx++] = s[j++];
            }
        }
        return res;
    }
};