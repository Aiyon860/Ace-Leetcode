int digitSum(int number);

int differenceOfSum(int* nums, int numsSize) {    
    uint32_t element = 0;
    uint32_t digit = 0;
    
    if (numsSize == 1) return 0;
    
    for (int i = 0; i < numsSize; i++) {
        element += nums[i];
        digit += digitSum(nums[i]);
    }
    
    return abs(element - digit);
}

int digitSum(int number) {
    if (number == 0) return 0;
    else return number % 10 + digitSum(number / 10);
}