/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let richest = 0, currentValue = 0;
    
    for (let i = 0; i < accounts.length; i++) {
        for (let j = 0; j < accounts[i].length; j++) {
            currentValue += accounts[i][j];
        }
        richest = Math.max(richest, currentValue);
        currentValue = 0;
    }
    
    return richest;
};