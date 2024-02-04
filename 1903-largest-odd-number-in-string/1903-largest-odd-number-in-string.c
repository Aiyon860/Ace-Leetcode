char* largestOddNumber(char* num) {
    int length = strlen(num);
    
    for (int i = length - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            memmove(num, num + 0, i + 2);
            num[i + 1] = '\0';
            return num;
        }
    }
    
    num[0] = '\0';
    return num;
}