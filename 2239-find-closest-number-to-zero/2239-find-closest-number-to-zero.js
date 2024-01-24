/**
 * @param {number[]} nums
 * @return {number}
 */
var findClosestNumber = function(nums) {
    let closestToZero = nums[0];
    
    for (let i = 1; i < nums.length; i++) {
        if (Math.abs(closestToZero) === nums[i]) {
            closestToZero = nums[i];
        }
        
        if (Math.abs(closestToZero) > Math.abs(nums[i])) {
            closestToZero = nums[i];
        }
    }
    
    return closestToZero;
};