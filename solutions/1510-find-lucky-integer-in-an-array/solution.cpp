class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int> freq;
       for(int value : arr){
        freq[value]++;
       }
       int res = -1;
       for(auto &it : freq){
        if(it.first == it.second){
            res = max(res,it.first);
        }
       }
       return res;
    }
};
