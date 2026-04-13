class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int, int>count;
      for(int num : arr){
        count[num]++;
      }
    vector<int> freq;
    for(auto const&[key,val] : count){
        freq.push_back(val);
    }
sort(freq.begin(),freq.end());
    for(int i = 1;i<freq.size();++i){
        if(freq[i] == freq[i-1]){
            return false;
        }
    }
    return true;
    }
};
