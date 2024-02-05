void reverseString(char* s, int sSize) {
    int end = sSize - 1;
    
    for (int start = 0; start < end; start++) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        end--;
    }
}