char* restoreString(char* s, int* indices, int indicesSize) {
    char* t = (char*) malloc((indicesSize + 1) * sizeof(char));
    
    for (int i = 0; i < indicesSize; i++)
    {
        t[indices[i]] = s[i];
    }
    t[indicesSize] = '\0';
    
    return t;
}