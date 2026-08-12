class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> stringStore;
        vector<string> ans;
        int left = 0;
        for(int right = 0;right<s.size();right++){
            if(right - left +1 == 10){
                string strWindow = s.substr(left,10);
                stringStore[strWindow]++;

                if(stringStore[strWindow] == 2){
                    ans.push_back(strWindow);
                }
                left++;
            }

        }
        return ans;
    }
};
