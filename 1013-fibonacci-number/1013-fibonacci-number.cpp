class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        vector<int> a = {0, 1};
        while (n > 1) {
            int temp = a[0];
            a[0] = a[1];
            a[1] += temp;
            --n;
        }
        return a[1];
    }
};