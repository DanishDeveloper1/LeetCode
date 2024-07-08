/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        return "Hello World"
        
    }
};

const helloFunction = createHelloWorld();
console.log(helloFunction({},null,42))
/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */