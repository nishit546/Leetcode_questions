/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    let max = -Infinity;
    let secondmax  = -Infinity;
    let thirdmax =-Infinity;

    for(let i = 0;i < nums.length;i++){
        if(nums[i] === max || nums[i] === secondmax || nums[i] === thirdmax) {
            continue;
        }
        if(nums[i] > max){
            thirdmax = secondmax;
            secondmax = max;
            max = nums[i];

        }
        else if(nums[i] > secondmax){
            thirdmax = secondmax;
            secondmax = nums[i];
        }
        else if(nums[i] > thirdmax){
            thirdmax = nums[i];
        }
    }
    return thirdmax == -Infinity ? max : thirdmax
};
