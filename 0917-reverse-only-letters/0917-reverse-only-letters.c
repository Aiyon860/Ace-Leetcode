char* reverseOnlyLetters(char* s) {
    char* left = s;
    char* right = s;
    
    while (*right) {
        right++;
    }
    right--;
    
    while (left < right) {
        if (!((*left >= 'a' && *left <= 'z') 
            || (*left >= 'A' && *left <= 'Z'))) {
            left++;
            continue;
        }
        
        if (!((*right >= 'a' && *right <= 'z') 
            || (*right >= 'A' && *right <= 'Z'))) {
            right--;
            continue;
        }
        
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
    
    return s;
}