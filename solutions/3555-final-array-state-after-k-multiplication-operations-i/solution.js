/**
 * @param {number[]} nums
 * @param {number} k
 * @param {number} multiplier
 * @return {number[]}
 */
var getFinalState = function(nums, k, multiplier) {
    for (let j = 0; j < k; j++) {
        let min = 0;
        for (let i = 1; i < nums.length; i++) {
            if (nums[i] < nums[min]) {
                min = i;
            }
        }
        nums[min] = nums[min] * multiplier;
    }

    return nums;
};
