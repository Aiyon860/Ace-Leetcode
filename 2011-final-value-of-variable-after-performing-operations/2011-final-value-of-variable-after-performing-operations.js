/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let final_value = 0;
    
    for (let i = 0; i < operations.length; i++) {
        operations[i].includes("-") ? final_value-- : final_value++;
    }
    
    return final_value;
};