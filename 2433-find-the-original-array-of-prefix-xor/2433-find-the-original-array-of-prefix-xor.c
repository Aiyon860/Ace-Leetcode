/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize) {
    int* arr = (int*) malloc(prefSize * sizeof(int));
    int sumXor = pref[0];
    
    arr[0] = pref[0];
    
    for (int i = 1; i < prefSize; i++) {
        arr[i] = sumXor ^ pref[i];
        sumXor ^= arr[i];
    }
    
    *returnSize = prefSize;
    
    return arr;
    free(arr);
}