bool isAnagram(char* s, char* t) {
    int lens = strlen(s), lent = strlen(t);
    if (lens != lent) {
        return false;
    }

    int sAlpha[128] = {0};
    int tAlpha[128] = {0};
    
    for (int i = 0; i < lens; i++) {
        sAlpha[(int)s[i]]++;
        tAlpha[(int)t[i]]++;
    }
    for (int i = 0; i < 128; i++) {
        if (sAlpha[i] != tAlpha[i]) {
            return false;
        }
    }

    return true;
}