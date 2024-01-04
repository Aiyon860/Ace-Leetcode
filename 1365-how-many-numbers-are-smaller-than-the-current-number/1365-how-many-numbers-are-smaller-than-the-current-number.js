/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
    let result = [], numsBigger = 0;
    
    for (let i = 0; i < nums.length; i++) {
        for (let j = 0; j < nums.length; j++) {
            if (nums[i] > nums[j]) {
                numsBigger++;
            }
        }
        result.push(numsBigger);
        numsBigger = 0;
    }
    
    return result;
};