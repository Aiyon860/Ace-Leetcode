/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function(image) {
    let n = image.length;
    
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            image[i][j] == 0 ? image[i][j] = 1 : image[i][j] = 0
        }
    }
    
    for (let i = 0; i < n; i++) {
        image[i].reverse();
    }
    
    return image;
};