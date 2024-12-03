class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.length(), m = spaces.size(), i = 0, j = 0;
        string res="";
        while (i < m && j <= spaces[i]) {
            if (j == spaces[i]) {
                res += " ";
                ++i;
            } else {
                res += s[j];
                ++j;
            }
        }
        while (j < n) {
            res += s[j];
            ++j;
        }
        return res;
    }
};