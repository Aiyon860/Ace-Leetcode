char* largestOddNumber(char* num) {
    int length = strlen(num);
    int largest_odd_index = -1;
    
    for (int i = length - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            largest_odd_index = i;
            break;
        }
    }
    
    if (largest_odd_index != -1) {
        memmove(num, num + 0, largest_odd_index + 2);
        num[largest_odd_index + 1] = '\0';
    } else {
        num[0] = '\0';
    }
    
    return num;
}