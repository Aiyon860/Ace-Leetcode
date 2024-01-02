/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let left = 0, maxProfit = 0;
    
    for (let right = 1; right < prices.length; right++) {
        maxProfit = Math.max(maxProfit, prices[right] - prices[left]);
        if (prices[left] > prices[right]) {
            left = right;
        } 
    }
    
    return maxProfit;
};