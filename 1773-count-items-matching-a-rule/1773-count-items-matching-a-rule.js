/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function(items, ruleKey, ruleValue) {
    let count = 0, n = items.length;
    
    if (ruleKey == "type") {
        for (let i = 0; i < n; i++) {
            if (items[i][0] == ruleValue) count++; 
        }
    }
    if (ruleKey == "color") {
        for (let i = 0; i < n; i++) {
            if (items[i][1] == ruleValue) count++; 
        }
    }
    if (ruleKey == "name") {
        for (let i = 0; i < n; i++) {
            if (items[i][2] == ruleValue) count++; 
        }
    }
    
    return count;
};