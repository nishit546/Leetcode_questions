/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let res = [];
    let j = nums[0];
    res.push(j);
    for(let i = 1;i<nums.length;i++){
        j+= nums[i];
        res.push(j);
    }
return res;
};
