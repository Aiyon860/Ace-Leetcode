int removePalindromeSub(char* s) {
    /*
     * there are only 3 cases:
     * 1. if the string is empty or
     * 2. if the string is already palindrome or
     * 3. if the string is not a palindrome in the first place
     *
     * Note:
     * 1. there are only 2 characters 'a' and 'b'
     * 2. keep in mind that subsequences that composed of only one type of letter are always palindrome strings
     */
    
    if (s[0] == '\0') { return 0; }
    
    int start = 0;
    int end = strlen(s) - 1;
    
    for (; start < end; ) {
        if (s[start] != s[end]) {
            return 2;
        }
        start++;
        end--;
    }
    
    return 1; 
}