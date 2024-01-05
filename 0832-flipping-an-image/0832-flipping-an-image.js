/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function(image) {
    let n = image.length;
    let image_horizontal = [];
    
    for (let i = 0; i < n; i++) {
        image_horizontal[i] = [];
    }
    
    for (let i = 0; i < n; i++) {
        for (let j = image[i].length - 1; j >= 0; j--) {
            if (image[i][j] == 0) {
                image[i][j] = 1;
                image_horizontal[i].push(image[i][j]);
            } else if (image[i][j] == 1) {
                image[i][j] = 0;
                image_horizontal[i].push(image[i][j]);
            }
        }
    }
    
    return image_horizontal;
};