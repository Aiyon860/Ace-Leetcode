/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function(items, ruleKey, ruleValue) {
    let count = 0, n = items.length, 
        set_key = ["type", "color", "name"],
        key_index = set_key.indexOf(ruleKey);
    
    for (let i = 0; i < n; i++) {
        items[i][key_index] == ruleValue ? count++ : count;
    }
    
    return count;
};