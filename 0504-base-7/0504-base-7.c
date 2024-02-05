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
    while (temp != 0) {
        length++;
        temp /= 7;
    }
    
    // allocate memory for the result string
    char* ans = (char*)malloc((length + 2) * sizeof(char)); // +2 for negative sign and null-terminator 
    
    int start = 0;
    int end = negative ? length : length - 1;
    
    if (negative) {
        ans[start] = '-';
        start++;
    }
    
    while (num != 0) {
        ans[end] = (num % 7) + '0';
        num /= 7;
        end--;
        start++;
    }
    
    ans[start] = '\0';
    
//     // reverse the string
//     int start = 0;
//     int end = length - 1;
    
//     // swap the characters
//     while (start < end) {
//         int temp = ans[start];
//         ans[start] = ans[end];
//         ans[end] = temp;
        
//         start++;
//         end--;
//     }

    return ans;
}