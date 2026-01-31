/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function(letters, target) {
    let res = [];
    for(let i =0;i<letters.length;i++){
        if(letters[i].charCodeAt() > target.charCodeAt()){
            res.push(letters[i]);
        }
        
    }
   
          if(res.length == 0){
            return letters[0]
          }
    
    let min = res[0];
    for(let j  =0;j<res.length;j++){
        if(res[j].charCodeAt() < min.charCodeAt()){
            min = res[j];
        }
        
    }
    return min;
};
