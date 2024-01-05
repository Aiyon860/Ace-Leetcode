/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let final_value = 0;
    
    for (let i = 0; i < operations.length; i++) {
        if (operations[i] == "X++") final_value++;  
        if (operations[i] == "++X") final_value++;  
        if (operations[i] == "X--") final_value--;  
        if (operations[i] == "--X") final_value--; 
    }
    
    return final_value;
};