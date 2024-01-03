/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRightDifference = function(nums) {
    let answer = [], leftSum = [], rightSum = [];
    
    if (nums.length == 1) return [0];
    
    for (let i = 0; i < nums.length; i++) {
        if (nums[i - 1] == undefined) {
            leftSum[i] = 0;
            continue;            
        }
        
        leftSum[i] = nums[i - 1] + leftSum[i - 1];
    }
    
    for (let i = nums.length - 1; i >= 0; i--) {
        if (nums[i + 1] == undefined) {
            rightSum[i] = 0;
            continue;
        }
        
        rightSum[i] = nums[i + 1] + rightSum[i + 1];
    }
    
    for (let i = 0; i < nums.length; i++) {
        answer[i] = Math.abs(leftSum[i] - rightSum[i]);
    }  
    
    return answer;
};