/**
 * @param {number[][]} coordinates
 * @return {boolean}
 */
var checkStraightLine = function(coordinates) {
    let xDiff = coordinates[1][0] - coordinates[0][0];
    let yDiff = coordinates[1][1] - coordinates[0][1];
    let xCurrDiff, yCurrDiff;
    
    for (let i = 2; i < coordinates.length; i++) {
        xCurrDiff = coordinates[i][0] - coordinates[i - 1][0];
        yCurrDiff = coordinates[i][1] - coordinates[i - 1][1];
        
        if (xCurrDiff === 0 && yCurrDiff === 0) {
            continue;
        }
        
        if ((yDiff * xCurrDiff) !== (xDiff * yCurrDiff)) {
            return false;
        }
    }
    return true;
};