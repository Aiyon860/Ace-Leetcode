void reverseString(char* s, int sSize) {
    int start = 0;
    int end = sSize - 1;
    
    for (int i = 0; i < end; i++) {
        int temp = s[i];
        s[i] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}