/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    //closures inner function can access the outer function var (nearest lexical scope var by closures in js)
    let count = n;
    return function() {
        return count++;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */