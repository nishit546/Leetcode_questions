/**
 * @param {number[]} nums
 * @return {number}
 */
var dominantIndex = function(nums) {
  let max = nums[0];
  for(let i = 0;i<nums.length;i++){
    if(nums[i]  > max){
        max = nums[i];
    }
  }
  let index = nums.indexOf(max);

  for(let i = 0;i<nums.length;i++){
    if(i !== index && max < nums[i] * 2 ){
        return -1;
    }

  } 
  return index;
};
