/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    for(let num in obj){
      return false;
    }
    return true;
};
