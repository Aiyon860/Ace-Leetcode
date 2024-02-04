int averageValue(int* nums, int numsSize) {
    int ans = 0;
    int count = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
            ans += nums[i];
            count += 1;
        }
    }
    
    if (count != 0) {
        return ans / count;
    } else {
        return ans;
    }
}