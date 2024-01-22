/**
 * @param {string[]} words
 * @param {character} separator
 * @return {string[]}
 */
var splitWordsBySeparator = function(words, separator) {
    let resultString = [];
    
    for (let i = 0; i < words.length; i++) {
        if (words[i].includes(separator)) {
            let temp = words[i].split(separator);
            for (let i of temp) {
                if (i !== '') {
                    resultString.push(i);                
                }
            }
        } else {
            resultString.push(words[i]);
        }
    }
    
    return resultString;
};