char* restoreString(char* s, int* indices, int indicesSize) {
    int length = strlen(s);
    char temp;
    
    for (int i = 0; i < indicesSize; i++) {
        if (indices[i] != i) {
            // Swap characters at indices[i] and i
            temp = s[indices[i]];
            s[indices[i]] = s[i];
            s[i] = temp;
            
            // Adjust indices array to reflect the swap
            int tempIndex = indices[indices[i]];
            indices[indices[i]] = indices[i];
            indices[i] = tempIndex;
            
            // Check the swapped position again
            i--;
        }
    }
    
    return s;
}