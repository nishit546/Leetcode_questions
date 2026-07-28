class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digSum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            int temp = nums[i];
            while(temp != 0){
                int digit = temp % 10;
                digSum += digit;
                temp /= 10;
            }
        }
        return abs(sum-digSum);
        
    }
};
