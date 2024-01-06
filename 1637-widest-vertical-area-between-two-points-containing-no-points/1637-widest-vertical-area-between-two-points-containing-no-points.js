/**
 * @param {number[][]} points
 * @return {number}
 */
var maxWidthOfVerticalArea = function(points) {
    let x = [], max_width = 0, n = points.length;
    
    // take the x-coordinate only, to find the widest vertical area   
    for (let i = 0; i < n; i++) {
        x.push(points[i][0]);
    }
    
    // sort in ascending order
    x.sort((a, b) => a - b);
    
    // comparing current max_width with substraction of element[j + 1] with element[j]
    for (let j = 0; j < n - 1; j++) {
        max_width = Math.max(max_width, x[j + 1] - x[j]);
    }
    
    return max_width;
};