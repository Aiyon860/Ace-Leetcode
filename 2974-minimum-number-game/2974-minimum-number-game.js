/**
 * @param {number[]} nums
 * @return {number[]}
 */
var numberGame = function(nums) {
    let arr = [];
    bubble_sort(nums, nums.length);
    for (let i = 0; i <= nums.length - 2; i+=2) {
        arr.push(nums[i + 1], nums[i]);
    }
    return arr;
};

function bubble_sort(arr, size) {
    for (let step = 0; step < size - 1; step++) {
        for (let i = 0; i < size - step - 1; i++) {
            if (arr[i] < arr[i + 1]) continue;
            let temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return arr
}