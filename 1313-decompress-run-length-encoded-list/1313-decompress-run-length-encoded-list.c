/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    // calculate the decompressed array
    int size = 0;
    for (int i = 0; i < numsSize; i += 2) {
        size += nums[i];
    }
    
    // allocate memory for the decompressed array
    int* ans = (int*) malloc(size * sizeof(int));
    int a = 0;
    
    // decompress the RLE list
    for (int i = 0; i < numsSize; i += 2) {
        for (int j = 0; j < nums[i]; j++) {
            ans[a++] = nums[i + 1];
        }
    }
    
    *returnSize = size;
    
    return ans;
}