/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*) malloc(numsSize * sizeof(int));
    int* arr_pos = (int*) malloc(numsSize / 2 * sizeof(int));
    int* arr_neg = (int*) malloc(numsSize / 2 * sizeof(int));
    
    int a = 0;
    int b = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            arr_pos[a] = nums[i];
            a++;
        } else {
            arr_neg[b] = nums[i];
            b++;
        }
    }
    
    a = 0;
    b = 0;
    
    for (int i = 0; i < numsSize; i += 2) {
        ans[i] = arr_pos[a];
        ans[i + 1] = arr_neg[b];
        
        a++;
        b++;
    }
    
    *returnSize = numsSize;
    
    return ans;
}