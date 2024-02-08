/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* s, char c, int* returnSize) {
    int len = strlen(s);
    
    *returnSize = len;
    int* ans = (int*)malloc((sizeof(int) * len));
    
    int c_position = -len;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == c) {
            c_position = i;
        }    
        ans[i] = i - c_position;
    }
    
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == c) {
            c_position = i;
        }
        
        if (ans[i] > abs(c_position - i)) {
            ans[i] = abs(c_position - i);
        } else {
            ans[i];
        }
    }
    
    return ans;
}