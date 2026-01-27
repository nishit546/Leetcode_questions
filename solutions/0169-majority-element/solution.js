/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let dig = 0;
    let count = 0;
    for(let num of nums){
      if(count === 0){
        dig = num;
      }
      if(dig === num){
        count++;
      }
      else{
        count--;
      }

    }
    return dig;
};
