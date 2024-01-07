/**
 * @param {string[]} names
 * @param {number[]} heights
 * @return {string[]}
 */
var sortPeople = function(names, heights) {
    let height_temp = [], names_sorted = [];
    
    let j = 0;
    for (let i = 0; i < heights.length; i++) {
        height_temp[j++] = heights[i];
    }
    
    heights.sort((a, b) => b - a);
    
    let k = 0;
    for (let i = 0; i < heights.length; i++) {
        names_sorted[k++] = names[height_temp.indexOf(heights[i])];
    }
    
    return names_sorted;
};