/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
    let newSentence = []; 
    s = s.split(' ');
    
    for (let i = 1; i <= k; i++) {
        newSentence.push(s[i - 1]);
    }
    
    return newSentence.join(' ');;
};