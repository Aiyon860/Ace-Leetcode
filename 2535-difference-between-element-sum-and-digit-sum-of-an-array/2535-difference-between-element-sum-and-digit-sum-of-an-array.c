int digitSum(int number);
int abs(int number);

int differenceOfSum(int* nums, int numsSize) {    
    int element = 0;
    int digit = 0;
    int absDiff;
    
    if (numsSize == 1) return 0;
    
    for (int i = 0; i < numsSize; i++) {
        element += nums[i];
        digit += digitSum(nums[i]);
    }
    
    absDiff = element - digit;
    
    return abs(absDiff);
}

int digitSum(int number) {
    if (number == 0) return 0;
    return number % 10 + digitSum(number / 10);
}

int abs(int number) {
    return number * ((number > 0) - (number < 0));
}