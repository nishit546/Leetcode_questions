class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int value : nums){
            if(value < 10){
                ans.push_back(value);
            }
            else{
                vector<int> digits;
                int temp = value;
                while(temp > 0){
                    digits.push_back(temp % 10);
                    temp /= 10;
                }
                reverse(digits.begin(),digits.end());
                for(int dig : digits){
                    ans.push_back(dig);
                }
            }
        }
        return ans;
    }
};
