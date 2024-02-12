/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*) malloc(numsSize * sizeof(int));
    
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            ans[j] = nums[i];
            j++;
        }
    }
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 1) {
            ans[j] = nums[i];
            j++;
        }
    }
    
    *returnSize = numsSize;
    
    return ans;
}