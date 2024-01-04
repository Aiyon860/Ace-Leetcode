/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    let greatestCandies = [];
    let check = 0;
    let n = candies.length;
    
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            if (i == j) continue;
            if ((candies[i] + extraCandies) >= candies[j]) check++;
        }
        check == (n - 1) ? greatestCandies.push(true) : greatestCandies.push(false);
        check = 0;
    }
    
    return greatestCandies;
};