class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> n;
        for(int i = 0;i<numbers.size();i++){
            int t = target - numbers[i];
            if(n.find(t) != n.end()){
                return {n[t]+1,i+1};
            }
            n[numbers[i]] = i;
        }
        return {};
    }
};
