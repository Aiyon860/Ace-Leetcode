class Solution {
public:
    int mySqrt(int x) {
        int l = 1, r = x;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long mid_square = static_cast<long long>(mid) * mid;
            if (mid_square == x) {
                return mid;
            } else if (mid_square < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return r;
    }
};