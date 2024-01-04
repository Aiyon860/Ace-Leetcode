/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function(arr) {
    let countNums = [], count = 1;
    
    for (let i = 0; i < arr.length; ) {
        for (let j = 0; j < arr.length; ) {
            if (arr[i] == arr[j] && i != j) {
                arr.splice(j, 1);
                count++;
            } else {
                j++;
            }
        }
        countNums.push(count);
        count = 1;
        arr.splice(i, 1);
    }
    
    countNums.sort();
    
    for (let i = 0; i < countNums.length - 1; i++) {
        if (countNums[i] == countNums[i + 1]) return false;
    } 
    return true;
};