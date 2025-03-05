/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let accumulator = init; // Start with the initial value
    
    nums.forEach((num, index) => {
        accumulator = fn(accumulator, num, index); // Apply the function
    });

    return accumulator; // Return the final result
};

/**
 * Example usage:
 * const nums = [1, 2, 3, 4];
 * const sumFn = (acc, num) => acc + num;
 * console.log(reduce(nums, sumFn, 0)); // 10
 */
