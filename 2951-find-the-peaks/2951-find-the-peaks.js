/**
 * @param {number[]} mountain
 * @return {number[]}
 */
var findPeaks = function(mountain) {
    if (mountain.length <= 2) return [];
    
    let peak= []
    
    for (let i = 1; i < mountain.length - 1; i++) {
        if ((mountain[i - 1] < mountain[i]) && (mountain[i] > mountain[i + 1])) {
            peak.push(i);
        }
    }
    
    return peak;
};