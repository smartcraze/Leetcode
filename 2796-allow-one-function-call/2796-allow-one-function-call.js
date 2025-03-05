/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let called = false; // Track if function has been called
    let result; // Store the result of the first call

    return function(...args) {
        if (!called) { // If not called yet
            called = true;
            result = fn(...args); // Call the function and store the result
            return result;
        }
        return undefined; // Return undefined on subsequent calls
    };
};

/**
 * Example Usage:
 * let fn = (a, b, c) => a + b + c;
 * let onceFn = once(fn);
 *
 * console.log(onceFn(1, 2, 3)); // 6
 * console.log(onceFn(2, 3, 6)); // undefined (fn is not called again)
 */
