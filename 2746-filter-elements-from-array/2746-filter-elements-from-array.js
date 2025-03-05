/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let newarr = [];
    
    arr.forEach((element, index) => {
        if (fn(element, index)) {  // Only push if fn returns true
            newarr.push(element);
        }
    });

    return newarr;
};

/**
 * Example usage:
 * const arr = [1, 2, 3, 4, 5];
 * const isEven = (num) => num % 2 === 0;
 * console.log(filter(arr, isEven)); // [2, 4]
 */
