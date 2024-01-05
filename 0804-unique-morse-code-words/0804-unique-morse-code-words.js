/**
 * @param {string[]} words
 * @return {number}
 */
var uniqueMorseRepresentations = function(words) {
    let morse_code = [
        ".-","-...","-.-.","-..",".","..-.","--.","....",
        "..",".---","-.-",".-..","--","-.","---",".--.",
        "--.-",".-.","...","-","..-","...-",".--","-..-",
        "-.--","--.."
    ]
    
    // contain the UNIQUE morse words 
    let words_morse = new Set();
    
    for (let word of words) {
        let morse_representation = "";
        for (let char of word) {
            // take the ASCII number of the word              
            morse_representation += morse_code[char.charCodeAt(0) - 'a'.charCodeAt(0)];         
        } 
        words_morse.add(morse_representation);
    }
    
    return words_morse.size;
};