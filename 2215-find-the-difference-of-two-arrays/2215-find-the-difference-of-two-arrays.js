/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[][]}
 */
var findDifference = function(nums1, nums2) {  
    let nums_one = new Set(nums1);
    let nums_two = new Set(nums2);
    
    for (const item of nums1) {
        if (nums_two.has(item)) {
            nums_one.delete(item);
            nums_two.delete(item);
        }
    }
    
    return [[...nums_one], [...nums_two]];
};