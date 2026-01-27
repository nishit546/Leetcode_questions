/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    let res = [];
    let n  = nums.length;
    if(k>n){
        k = k % n;
    }
     for(let i = nums.length-k;i<n;i++){
        res.push(nums[i]);
    }
    for(let i = 0;i<nums.length-k;i++){
        res.push(nums[i]);
    }
   
   for(let i = 0;i<n;i++){
    nums[i] = res[i];
   }
    
};
