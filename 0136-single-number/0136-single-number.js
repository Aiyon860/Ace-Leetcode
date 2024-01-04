/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let xorAns = 0;
    
    for (let i = 0; i < nums.length; i++) {
        xorAns ^= nums[i];
    }
    
    return xorAns;
};