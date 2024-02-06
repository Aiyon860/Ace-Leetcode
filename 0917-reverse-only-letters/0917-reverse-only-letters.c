char* reverseOnlyLetters(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    
    while (left < right) {
        if (!isalpha(s[left])) {
            left++;
            continue;
        }
        
        if (!isalpha(s[right])) {
            right--;
            continue;
        }
        
        int temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
    
    return s;
}