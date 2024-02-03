int smallestRangeI(int* nums, int numsSize, int k) {
    int min_val = nums[0];
    int max_val = nums[0];
    
    for (int i = 0; i < numsSize; i++) {
        if (min_val > nums[i])
            min_val = nums[i];
        if (max_val < nums[i])
            max_val = nums[i];
    }
    
    if (min_val + k >= max_val - k)
        return 0;
    
    return (max_val - k) - (min_val + k);
}