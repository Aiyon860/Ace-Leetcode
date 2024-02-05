char* convertToBase7(int num) {  
    if (num == 0) {
        char* ans = (char*)malloc(2 * sizeof(char));
        ans[0] = '0';
        ans[1] = '\0';
        return ans;        
    }
    
    int negative = 0;
    
    if (num < 0) {
        negative = 1;
        num = abs(num);
    } 
    
    // calculate the length of the result string
    int temp = num;
    int length = 0;
    
    do {
       length++;
    } while (temp /= 7);
    
    // allocate memory for the result string
    char* ans = (char*)malloc((length + 2) * sizeof(char)); // +2 for negative sign and null-terminator 
    
    int end = length + negative - 1;

    if (negative) {
        ans[0] = '-';
    }

    // directly assigning the value from (last index - 1)   
    do {
        ans[end] = (num % 7) + '0';
        end--;
    } while (num /= 7);
    
    // add the null-terminator to the last index
    ans[length + negative] = '\0';

    return ans;
}