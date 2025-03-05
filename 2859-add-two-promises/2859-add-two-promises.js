/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    const value1 = await promise1; // Wait for promise1 to resolve
    const value2 = await promise2; // Wait for promise2 to resolve
    return value1 + value2; // Return their sum
    
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */