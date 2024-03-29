bool isLongPressedName(char* name, char* typed) { 
    int i = 0;  // name pointer
    int j = 0;  // typed pointer
    
    while (typed[j] != '\0') {
        if (name[i] == typed[j]) {
            i++;
            j++;
        } else if (j == 0 || typed[j] != typed[j - 1]) {
            return 0;
        } else {
            j++;
        }
    }
    
    return name[i] == '\0';
}