bool isAnagram(char* s, char* t) {
    int lens = strlen(s), lent = strlen(t);
    if (lens != lent) {
        return false;
    }

    int alpha[26] = {0};
    
    for (int i = 0; i < lens; i++) {
        alpha[s[i]-97]++;
        alpha[t[i]-97]--;
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] != 0) {
            return false;
        }
    }

    return true;
}