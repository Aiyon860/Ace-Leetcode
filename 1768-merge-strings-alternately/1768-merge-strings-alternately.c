char* mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int len = len1 + len2;
    char* ans = (char*) malloc((len + 1) * sizeof(char));
    
    int i, j, k;
    for (i = 0, j = 0, k = 0; j < len1 && k < len2; i += 2, j++, k++) {
        ans[i] = word1[j];
        ans[i + 1] = word2[k];
    }
    
    while (j < len1) {
        ans[i] = word1[j];
        i++;
        j++;
    }
    
    while (k < len2) {
        ans[i] = word2[k];
        i++;
        k++;
    }
    
    ans[i] = '\0';
    
    return ans;
}