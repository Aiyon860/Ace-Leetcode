bool isLongPressedName(char* name, char* typed) {
    int n = strlen(name); 
    int t = strlen(typed);
    
    int i = 0;  // name pointer
    int j = 0;  // typed pointer
    
    while (j < t) {
        if (i < n && name[i] == typed[j]) {
            i++;
        } else if (j == 0 || typed[j] != typed[j - 1]) {
            return 0;
            break;
        }
        j++;
    }
    
    return i == n;
}