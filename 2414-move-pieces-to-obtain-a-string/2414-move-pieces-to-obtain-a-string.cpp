class Solution {
public:
    bool canChange(string start, string target) {
        if (start == target) {
            return true;
        }
        int l = 0, r = 0;
        for (int i = 0; i < start.length(); ++i) {
            char s = start[i], t = target[i];
            if (s == 'R') {
                if (l > 0) {
                    return false;
                }
                ++r;
            }
            if (t == 'L') {
                if (r > 0) {
                    return false;
                }
                ++l;
            }
            if (s == 'L') {
                if (l == 0) {
                    return false;
                }
                --l;
            }
            if (t == 'R') {
                if (r == 0) {
                    return false;
                }
                --r;
            }
        }
        return l == 0 && r == 0;
    }
};