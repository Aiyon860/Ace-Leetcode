/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    uint16_t left = 0;               // left pointer
    uint16_t right = numsSize - 1;   // right pointer
        
    // do the iteration until left == right or left > right.
    while (left < right) {
        
        // if the left index's value is already an even number.
        if (nums[left] % 2 == 0) {
            left++;
            
        // if the left index's value is an odd number and
        // the right index's value is an even number, then swap.
        } else if (nums[right] % 2 == 0) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            
            left++;
            right--;
        
        // if the left index's value is an odd number and
        // the right index's value is an odd number too, then we don't swap.
        } else {
            right--;
        }
    }
    
    // return back to the caller about the size of the array will be returned.
    *returnSize = numsSize;
    
    return nums;
}