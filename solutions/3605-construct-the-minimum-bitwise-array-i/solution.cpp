class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int num : nums){
            int res = -1;
            for(int x = 0;x<=num;x++){
                if((x | x+1) == num){
                    res = x;
                    break;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};
