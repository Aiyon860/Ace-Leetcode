/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** ans = malloc(n * sizeof(char*));
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) ans[i - 1] = "FizzBuzz";
        else if (i % 3 == 0) ans[i - 1] = "Fizz";
        else if (i % 5 == 0) ans[i - 1] = "Buzz";
        else {
            ans[i - 1] = malloc(5);
            sprintf(ans[i - 1], "%d", i);            
        }
    }
    
    *returnSize = n;
    
    return ans;
}