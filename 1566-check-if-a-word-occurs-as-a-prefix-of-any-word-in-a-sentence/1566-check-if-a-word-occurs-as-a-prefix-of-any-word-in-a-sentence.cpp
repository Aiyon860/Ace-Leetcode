class Solution {
public:
    int isPrefixOfWord(string s, string w) {
        int i = 0, idx = 0, w_len = w.length();
        stringstream ss(s);
        string word;
        while (ss >> word) {
            ++idx;
            if (word.compare(0, w_len, w) == 0) {
                return idx;
            }
        }
        return -1;
    }
};