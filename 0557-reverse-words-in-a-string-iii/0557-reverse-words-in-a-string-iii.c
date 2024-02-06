char* reverseWords(char* s) {
    int left = 0;
    int right = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            right = i - 1;
            
            while (left < right) {
                int temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                
                left++;
                right--;
            }
            
            left = i + 1;
        } 
        
        if (i == len - 1) {
            right = len - 1;
            
            while (left < right) {
                int temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                
                left++;
                right--;
            }
        }
    }
    
    return s;
}