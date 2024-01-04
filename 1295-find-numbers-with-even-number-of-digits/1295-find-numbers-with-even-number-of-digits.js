/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    let count = 0;
    
    for (let i = 0; i < nums.length; i++) {
        let value = Math.floor(Math.log10(nums[i])) + 1;
        if (value % 2 == 0) {
            count++;            
        }
    }
    
    return count;
};