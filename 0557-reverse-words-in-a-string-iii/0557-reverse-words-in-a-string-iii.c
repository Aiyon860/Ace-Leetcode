char* reverseWords(char* s) {
    int len = strlen(s);
    int left = 0;
    int right = 0;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ' || i == len - 1) {
            right = i - 1;
            
            if (i == len - 1) {
                right = i;
            }
            
            while (left < right) {
                int temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                
                left++;
                right--;
            }
            
            left = i + 1;
        } 
    }
    
    return s;
}