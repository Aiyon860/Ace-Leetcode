/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int left = 0;               // left pointer
    int right = numsSize - 1;   // right pointer
        
    while (left < right) {
        if (nums[left] % 2 == 0) {
            left++;
        } else if (nums[right] % 2 == 0) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            
            left++;
            right--;
        } else {
            right--;
        }
    }
    
    *returnSize = numsSize;
    
    return nums;
}