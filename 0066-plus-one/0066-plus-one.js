/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let container = BigInt(digits.join(''));
    container += 1n;
    container = container.toString();
    let result = container.split('');
    return result;
};