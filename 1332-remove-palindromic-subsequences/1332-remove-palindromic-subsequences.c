int removePalindromeSub(char* s) {
    /*
     * there are only 3 cases:
     * 1. if the string is empty or
     * 2. if the string is already palindrome or
     * 3. if the string is not a palindrome in the first place
     */
    
    int step = 0;
    int start = 0;
    int end = strlen(s) - 1;
    
    while (start < end) {
        if (s[start] != s[end]) {
            step++;
            break;
        } else {
            start++;
            end--;
        }
    }
    step++;
    
    return step;
}