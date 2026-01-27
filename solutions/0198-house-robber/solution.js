/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    let prev = 0;
    let curr = 0;
    for(let num of nums){
        [prev,curr] = [curr,Math.max(curr,prev+num)];
    }
    return curr;
};
