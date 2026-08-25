class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       string temp;
       unordered_map<string,vector<string>>category;
       for(string word:strs){
        temp = word;
        sort(temp.begin(),temp.end());
        category[temp].push_back(word);
       } 
       vector<vector<string>>result;
       for(auto& it:category){
        result.push_back(it.second);
       }
       return result;
    }
};