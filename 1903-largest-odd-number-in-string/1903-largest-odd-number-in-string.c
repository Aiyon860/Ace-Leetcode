char* largestOddNumber(char* num) {
    int length = strlen(num);
    char* empty = malloc(1);
    
    for (int i = length - 1; i >= 0; i--) {
        if (num[i] % 2 == 1) {
            char* odd_largest = malloc((i + 2) * sizeof(char));
            
            strncpy(odd_largest, num, i + 1);
            odd_largest[i + 1] = '\0';
            return odd_largest;
        }
    }
    
    empty[0] = '\0';
    return empty;
}