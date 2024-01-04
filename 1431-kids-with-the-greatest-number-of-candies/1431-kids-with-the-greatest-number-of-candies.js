/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    let greatestCandies = [];
    let checkGreatest = 0;
    let n = candies.length;
    
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            if (i == j) continue;
            if ((candies[i] + extraCandies) >= candies[j]) {
                checkGreatest++;
            }
        }
        if (checkGreatest == (n - 1)) {
            greatestCandies.push(true);
        } else {
            greatestCandies.push(false);
        }
        checkGreatest = 0;
    }
    
    return greatestCandies;
};