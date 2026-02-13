/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function(sentence) {
    let str = "abcdefghijklmnopqrstuvwxyz";
    for(let ch of str){
        if(!sentence.includes(ch)){
            return false;
        }
    }
    return true;
};
