class Solution {
public:
    unordered_map<int, int> mp = {{0,0}, {1,1}};
    int fib(int n) {
        if (n <= 1) return n;
        if (mp.count(n)) return mp[n];
        mp[n] = fib(n - 2) + fib(n - 1); 
        return mp[n];
    }
};