/**
 * @param {number[]} nums
 * @return {number}
 */
var findNonMinOrMax = function(nums) {
    if(nums.length <= 2){
        return -1;
    }
    let sortedNums = nums.sort((a,b)=>a-b);
    return sortedNums[1];
};
