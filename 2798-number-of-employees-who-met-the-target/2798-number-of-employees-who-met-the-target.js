/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function(hours, target) {
    let employee = 0;
    
    for (let i = 0; i < hours.length; i++) {
        if (hours[i] >= target) employee++;
    }
    
    return employee;
};