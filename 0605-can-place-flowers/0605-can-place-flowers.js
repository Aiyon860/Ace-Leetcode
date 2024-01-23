/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function(flowerbed, n) {
    for (let i = 0; i < flowerbed.length; i++) {
        let leftOk = i == 0 || flowerbed[i - 1] == 0;
        let rightOk = i == flowerbed.length - 1 || flowerbed[i + 1] == 0;
        
        if (leftOk && flowerbed[i] == 0 && rightOk) {
            flowerbed[i] = 1;
            n -= 1;
        }
    }
    
    return n <= 0;
};