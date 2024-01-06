/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    let max_words = 0;
    
    for (const sentence of sentences) {
        let current_max = sentence.split(' ').length;
        max_words = Math.max(max_words, current_max);
    }
    
    return max_words;
};