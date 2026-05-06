class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
       for(int i = 0;i< n;i++){
        nums.push_back(start + 2 * i);
       }
       int res = 0;
       for(int j = 0;j < nums.size();j++){
        res = res ^ nums[j];
       }
       return res;
    }
};
