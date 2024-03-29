bool isPalindrome(char* s) {
    char* left = s;
    char* right = s;
    
    // to figure out the length of the "s"
    while (*right) {
        right++;
    }
    right--;
    
    while (left < right) {
        // check if left character is alphanumeric
        if (!((*left >= 'a' && *left <= 'z') 
            || (*left >= 'A' && *left <= 'Z') 
            || (*left >= '0' && *left <= '9'))) {
            left++;
            continue;
        }
        
        // check if right character is alphanumeric
        if (!((*right >= 'a' && *right <= 'z') 
            || (*right >= 'A' && *right <= 'Z') 
            || (*right >= '0' && *right <= '9'))) {
            right--;
            continue;
        }
        
        if (*left >= 'A' && *left <= 'Z') {
            *left += 32;
        }
        
        if (*right >= 'A' && *right <= 'Z') {
            *right += 32;
        }
        
        if (*left != *right) {
            return 0;
            break;
        }
        
        left++;
        right--;
    }
    
    return 1;
}