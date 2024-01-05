/**
 * @param {number[]} encoded
 * @param {number} first
 * @return {number[]}
 */
var decode = function(encoded, first) {
    let arr = [first], n = encoded.length;
    
    for (let i = 0; i < n; i++) {
        arr.push(encoded[i] ^ arr[i]);
    }
    
    return arr;
};